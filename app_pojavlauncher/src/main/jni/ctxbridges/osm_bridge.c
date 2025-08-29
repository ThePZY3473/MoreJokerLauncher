//
// Created by maks on 18.10.2023.
//
#include <malloc.h>
#include <string.h>
#include <environ/environ.h>
#include "osm_bridge.h"
#define TAG __FILE_NAME__
#include <log.h>

static __thread osm_render_window_t* currentBundle;

// Its not in a .h file because it is not supposed to be used outsife of this file.
void setNativeWindowSwapInterval(struct ANativeWindow* nativeWindow, int swapInterval);

bool osm_init() {
    if(!dlsym_OSMesa()) return false;
    return true;
}

osm_render_window_t* osm_get_current() {
    return currentBundle;
}

osm_render_window_t* osm_init_context(osm_render_window_t* share) {
    osm_render_window_t* render_window = malloc(sizeof(osm_render_window_t));
    if(render_window == NULL) return NULL;
    memset(render_window, 0, sizeof(osm_render_window_t));
    OSMesaContext osmesa_share = NULL;
    if(share != NULL) osmesa_share = share->context;
    OSMesaContext context = OSMesaCreateContext_p(OSMESA_RGBA, osmesa_share);
    if(context == NULL) {
        free(render_window);
        return NULL;
    }
    render_window->context = context;
    return render_window;
}

void osm_swap_surfaces(osm_render_window_t* bundle) {
    if(bundle->nativeSurface != NULL && bundle->newNativeSurface != bundle->nativeSurface) {
        ANativeWindow_release(bundle->nativeSurface);
    }
    if(bundle->newNativeSurface != NULL) {
        LOGI("Switching to new native surface");
        bundle->nativeSurface = bundle->newNativeSurface;
        bundle->newNativeSurface = NULL;
        ANativeWindow_acquire(bundle->nativeSurface);
        return;
    }else {
        LOGI("No new native surface, switching to dummy framebuffer");
        bundle->nativeSurface = NULL;
    }

}

void osm_release_window() {
    currentBundle->newNativeSurface = NULL;
    osm_swap_surfaces(currentBundle);
}

void osm_apply_current_ll() {
    uint32_t width;
    uint32_t height;
    if(currentBundle->nativeSurface != NULL) {
        width = ANativeWindow_getWidth(currentBundle->nativeSurface);
        height = ANativeWindow_getHeight(currentBundle->nativeSurface);
    }else {
        width = height = 128;
    }
    OSMesaMakeCurrent_p(currentBundle->context, currentBundle->nativeSurface, GL_UNSIGNED_BYTE, (GLsizei) width, (GLsizei) height);
}

void osm_make_current(osm_render_window_t* bundle) {
    if(bundle == NULL) {
        //technically this does nothing as its not possible to unbind a context in OSMesa
        OSMesaMakeCurrent_p(NULL, NULL, 0, 0, 0);
        currentBundle = NULL;
        return;
    }
    bool hasSetMainWindow = false;
    currentBundle = bundle;
    if(pojav_environ->mainWindowBundle == NULL) {
        pojav_environ->mainWindowBundle = (basic_render_window_t*) bundle;
        LOGI("Main window bundle is now %p", pojav_environ->mainWindowBundle);
        pojav_environ->mainWindowBundle->newNativeSurface = pojav_environ->pojavWindow;
        hasSetMainWindow = true;
    }
    if(bundle->nativeSurface == NULL) {
        //prepare the buffer for our first render!
        osm_swap_surfaces(bundle);
        if(hasSetMainWindow) pojav_environ->mainWindowBundle->state = STATE_RENDERER_ALIVE;
    }

    osm_apply_current_ll();
}

void osm_swap_buffers() {
    if(currentBundle->state == STATE_RENDERER_NEW_WINDOW) {
        osm_swap_surfaces(currentBundle);
        osm_apply_current_ll();
        currentBundle->state = STATE_RENDERER_ALIVE;
    }
    if(currentBundle->state == STATE_RENDERER_ALIVE) OSMesaSwapBuffers_p();
}

void osm_setup_window() {
    if(pojav_environ->mainWindowBundle != NULL) {
        LOGI("Main window bundle is not NULL, changing state");
        pojav_environ->mainWindowBundle->state = STATE_RENDERER_NEW_WINDOW;
        pojav_environ->mainWindowBundle->newNativeSurface = pojav_environ->pojavWindow;
    }
}

void osm_swap_interval(int swapInterval) {
    if(pojav_environ->mainWindowBundle != NULL && pojav_environ->mainWindowBundle->nativeSurface != NULL) {
        setNativeWindowSwapInterval(pojav_environ->mainWindowBundle->nativeSurface, swapInterval);
    }
}