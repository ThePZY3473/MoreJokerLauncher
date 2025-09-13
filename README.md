<H1 align="center">MojoLauncher</H1>

<img src="https://github.com/MojoLauncher/MojoLauncher/blob/v3_openjdk/app_pojavlauncher/src/main/assets/pojavlauncher.png" align="left" width="150" height="150" alt="MojoLauncher logo">

[![Android CI](https://github.com/MojoLauncher/MojoLauncher/workflows/Android%20CI/badge.svg)](https://github.com/MojoLauncher/MojoLauncher/actions)
[![GitHub commit activity](https://img.shields.io/github/commit-activity/m/MojoLauncher/MojoLauncher)](https://github.com/MojoLauncher/MojoLauncher/actions)
[![Crowdin](https://badges.crowdin.net/pojavlauncher/localized.svg)](https://crowdin.com/project/pojavlauncher)
[![Discord](https://img.shields.io/discord/1365346109131722753.svg?label=&logo=discord&logoColor=ffffff&color=7389D8&labelColor=6A7EC2)](https://discord.gg/VHdwQFsaGX)
（此fork似乎无意义）

* MoreJokerLauncher是一个一个启动器啊啊啊啊啊啊，基于 [PojavLauncher](https://github.com/PojavLauncherTeam/PojavLauncher), 反正是用来运行Minecraft:Java Edition 的。

* 它几乎可以运行每个版本的Minecraft，让你能够使用仅限.jar的安装程序来安装模组加载器，例如 [Forge](https://files.minecraftforge.net/) 和 [Fabric](http://fabricmc.net/), 模组 例如 [OptiFine](https://optifine.net) 和 [LabyMod](https://www.labymod.net/en), 以及挂端 [Wurst](https://www.wurstclient.net/), 还有更多!

## Navigation
- [Introduction](#introduction)  
- [Getting MojoLauncher](#getting-mojolauncher)
- [Building](#building) 
- [Current status](#current-status) 
- [License](#license) 
- [Contributing](#contributing) 
- [Credits & Third party components and their licenses](#credits--third-party-components-and-their-licenses-if-available)

## 介绍 
* MoreJokerLauncher是一个Minecraft:Java Edition的Android启动器，基于 [PojavLauncher](https://github.com/PojavLauncherTeam/PojavLauncher)
* 该启动器可以启动几乎所有可用的Minecraft版本，从rd-132211到1.21快照(包括战斗测试版本)。 
* 还支持安装Forge和Fabric。

## 获取 MojoLauncher

你可以通过三种方法获取 MoreJokerLauncher:

1. 您可以从预构建的应用获取 [automatic builds](https://github.com/MojoLauncher/MojoLauncher/actions).

2. 您可以通过点击此图片从 Google Play 获取另一个优秀的游戏:
[![Google Play](https://play.google.com/intl/en_us/badges/static/images/badges/en_badge_web_generic.png)](https://play.google.com/store/apps/details?id=com.miHoYo.GenshinImpact)

3. 你可以去自己用源代码编译 [build](#building) 
## Building   
* Build the launcher (it will automatically download all required components)
```
./gradlew :app_pojavlauncher:assembleDebug
```
(Replace `./gradlew` with `.\gradlew.bat` if you are building on Windows).

* （下面的自己看吧）
## Current roadmap
- [x] Instance system in favor of profiles
- [x] Out-of-the box 1.21.5 support
- [ ] LTW: resolve issues with Create
- [ ] LTW: enable compute shader/image extensions
- [ ] LTW: switch to a color-renderable format for framebuffers
- [ ] Modpack/mod management tool
- [ ] mrpack/CurseForge zip import
- [ ] MMC-compatible instance import
- [ ] Patch-on-dlopen for mod native libraries
- [ ] Replace Holy-GL4ES 1.1.5 with KW (maybe? need to figure out requirements)

## Known Issues
- Some physical mice may have very slow mouse speed
- On Holy GL4ES, large texture atlases may be distorted (resulting in stretched/blocky textures in modpacks)
- Probably more, that's why we have a bug tracker ;) 

## License
- MojoLauncher is licensed under [GNU LGPLv3](https://github.com/MojoLauncher/MojoLauncher/blob/v3_openjdk/LICENSE).

## Contributing
Contributions are welcome! We welcome any type of contribution, not only code. For example, you can help the wiki shape up. You can help the [translation](https://crowdin.com/project/pojavlauncher) too!


Any code change to this repository should be submitted as a pull request. The description should explain what the code does and give steps to execute it.

## Credits & Third party components and their licenses (if available)
- [PojavLauncher](https://github.com/PojavLauncherTeam/PojavLauncher): [GNU LGPLv3 License](https://github.com/PojavLauncherTeam/PojavLauncher/blob/v3_openjdk/LICENSE)
- [Boardwalk](https://github.com/zhuowei/Boardwalk) (JVM Launcher): Unknown License/[Apache License 2.0](https://github.com/zhuowei/Boardwalk/blob/master/LICENSE) or GNU GPLv2.
- Android Support Libraries: [Apache License 2.0](https://android.googlesource.com/platform/prebuilts/maven_repo/android/+/master/NOTICE.txt).
- [GL4ES](https://github.com/PojavLauncherTeam/gl4es): [MIT License](https://github.com/ptitSeb/gl4es/blob/master/LICENSE).<br>
- [OpenJDK](https://github.com/PojavLauncherTeam/openjdk-multiarch-jdk8u): [GNU GPLv2 License](https://openjdk.java.net/legal/gplv2+ce.html).<br>
- [LWJGL3](https://github.com/MojoLauncher/lwjgl3): [BSD-3 License](https://github.com/LWJGL/lwjgl3/blob/master/LICENSE.md).
- [Mesa 3D Graphics Library](https://gitlab.freedesktop.org/mesa/mesa): [MIT License](https://docs.mesa3d.org/license.html).
- [pro-grade](https://github.com/pro-grade/pro-grade) (Java sandboxing security manager): [Apache License 2.0](https://github.com/pro-grade/pro-grade/blob/master/LICENSE.txt).
- [bhook](https://github.com/bytedance/bhook) (Used for exit code trapping): [MIT license](https://github.com/bytedance/bhook/blob/main/LICENSE).
- Thanks to [MCHeads](https://mc-heads.net) for providing Minecraft avatars.
