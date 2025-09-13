<H1 align="center">MoreJokerLauncher</H1>
 (我的天哪，我在做什么)
<img src="https://github.com/MojoLauncher/MojoLauncher/blob/v3_openjdk/app_pojavlauncher/src/main/assets/pojavlauncher.png" align="left" width="150" height="150" alt="MojoLauncher logo">

[![Android CI](https://github.com/MojoLauncher/MojoLauncher/workflows/Android%20CI/badge.svg)](https://github.com/MojoLauncher/MojoLauncher/actions)
[![GitHub commit activity](https://img.shields.io/github/commit-activity/m/MojoLauncher/MojoLauncher)](https://github.com/MojoLauncher/MojoLauncher/actions)
[![Crowdin](https://badges.crowdin.net/pojavlauncher/localized.svg)](https://crowdin.com/project/pojavlauncher)
[![Discord](https://img.shields.io/discord/1365346109131722753.svg?label=&logo=discord&logoColor=ffffff&color=7389D8&labelColor=6A7EC2)](https://discord.gg/VHdwQFsaGX)
* 相比于MoreJokerLauncher，[Fold Craft Launcher](https://github.com/FCL-Team/FoldCraftLauncher/)可能更适合你
* MoreJokerLauncher是一个一个启动器啊啊啊啊啊啊，基于 [PojavLauncher](https://github.com/PojavLauncherTeam/PojavLauncher), 反正是用来运行Minecraft:Java Edition 的。

* 它几乎可以运行每个版本的Minecraft，让你能够使用仅限.jar的安装程序来安装模组加载器，例如 [Forge](https://files.minecraftforge.net/) 和 [Fabric](http://fabricmc.net/), 模组 例如 [OptiFine](https://optifine.net) 和 [LabyMod](https://www.labymod.net/en), 以及挂端 [Wurst](https://www.wurstclient.net/), 还有更多!

## Navigation
- [介绍](#介绍)  
- [获取 MoreJokerLauncher](#获取 MoreJokerLauncher)
- [编译](#编译) 
- [当前计划](#当前计划) 
- [许可证](#许可证) 
- [Contributing](#contributing) 
- [Credits & Third party components and their licenses](#credits--third-party-components-and-their-licenses-if-available)

## 介绍 
* MoreJokerLauncher是一个Minecraft:Java Edition的Android启动器，基于 [PojavLauncher](https://github.com/PojavLauncherTeam/PojavLauncher)
* 该启动器可以启动几乎所有可用的Minecraft版本，从rd-132211到1.21快照(包括战斗测试版本)。 
* 还支持安装Forge和Fabric。

## 获取 MoreJokerLauncher

你可以通过三种方法获取 MoreJokerLauncher:

1. 您可以从预构建的应用获取 [automatic builds](https://github.com/ThePZY3473/MoreJokerLauncher/actions).

2. 您可以通过点击此图片从 Google Play 获取另一个优秀的游戏:
[![Google Play](https://play.google.com/intl/en_us/badges/static/images/badges/en_badge_web_generic.png)](https://play.google.com/store/apps/details?id=com.miHoYo.GenshinImpact)

3. 你可以去自己用源代码编译 [build](#building) 
## 编译   
* 构建启动器（它将自动下载所有必需的组件）
```
./gradlew :app_pojavlauncher:assembleDebug
```
(替换`./gradlew `用`./gradlew.bat `如果您是在Windows上构建)。

## 当前计划
- [x] 有利于配置文件的实例系统
- [x] 开箱即用的 1.21.5 支持
- [ ] LTW：解决 Create 问题
- [ ] LTW：启用计算着色器/图像扩展
- [ ] LTW：切换到帧缓冲区的可彩色渲染格式
- [ ] Modpack/mod 管理工具
- [ ] mrpack/CurseForge zip 导入
- [ ] MMC 兼容实例导入
- [ ] 用于 mod 原生库的 Patch-on-dlopen
- [ ] 将 Holy-GL4ES 1.1.5 替换为 KW（也许？需要弄清楚要求）

## 已知问题
- 一些物理鼠标的鼠标速度可能非常慢
- 在 Holy GL4ES 上，大型纹理图集可能会扭曲（导致模组包中的纹理被拉伸/块状）
- 可能更多，这就是我们有一个错误跟踪器的原因;)

## 许可证
- MojoLauncher 用的是ArtJoker爱用的： [GNU LGPLv3](https://github.com/MojoLauncher/MojoLauncher/blob/v3_openjdk/LICENSE)许可证。

## 贡献
欢迎投稿！我们欢迎任何类型的贡献，而不仅仅是代码。例如，您可以帮助 wiki 成型。你还可以帮助 [translation](https://crowdin.com/project/pojavlauncher) !


Any code change to this repository should be submitted as a pull request. The description should explain what the code does and give steps to execute it.

## Credits和第三方组件及其许可证(如果可用)
- [PojavLauncher](https://github.com/PojavLauncherTeam/PojavLauncher): [GNU LGPLv3 License](https://github.com/PojavLauncherTeam/PojavLauncher/blob/v3_openjdk/LICENSE)
- [Boardwalk](https://github.com/zhuowei/Boardwalk) (JVM Launcher): Unknown License/[Apache License 2.0](https://github.com/zhuowei/Boardwalk/blob/master/LICENSE) or GNU GPLv2.
- Android Support Libraries: [Apache License 2.0](https://android.googlesource.com/platform/prebuilts/maven_repo/android/+/master/NOTICE.txt).
- [GL4ES](https://github.com/PojavLauncherTeam/gl4es): [MIT License](https://github.com/ptitSeb/gl4es/blob/master/LICENSE).<br>
- [OpenJDK](https://github.com/PojavLauncherTeam/openjdk-multiarch-jdk8u): [GNU GPLv2 License](https://openjdk.java.net/legal/gplv2+ce.html).<br>
- [LWJGL3](https://github.com/MojoLauncher/lwjgl3): [BSD-3 License](https://github.com/LWJGL/lwjgl3/blob/master/LICENSE.md).
- [Mesa 3D Graphics Library](https://gitlab.freedesktop.org/mesa/mesa): [MIT License](https://docs.mesa3d.org/license.html).
- [pro-grade](https://github.com/pro-grade/pro-grade) (Java sandboxing security manager): [Apache License 2.0](https://github.com/pro-grade/pro-grade/blob/master/LICENSE.txt).
- [bhook](https://github.com/bytedan