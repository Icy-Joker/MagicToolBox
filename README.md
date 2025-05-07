<h1 style="text-align:center"><strong>MagicToolBox</strong></h1>



1. ## 目录结构说明
   | 文件(夹)   | 内容描述                                                 | 备注 |
   | :--------- | :------------------------------------------------------- | :--: |
   | bin        | SDK核心动态库、工具、服务等                              |      |
   | etc        | 自带工具初始化配置文件                                   |      |
   | include    | 二次开发必需头文件                                       |      |
   | lib        | 二次开发必需链接库                                       |      |
   | plugins    | 插件(按目录区分不同用途)                                 |      |
   | tools      | 二次开发用辅助工具                                       |      |
   | thirdparty | 第三方库支持                                             |      |
   | examples   | 示例程序(源代码、配置文件、构建脚本等)                   |      |
   | test       | 测试用程序、配置文件、运行脚本等                         |      |
   | src        | 源码、构建脚本等(**若提供则应该尽量做到拿来即用**)       |      |
   | doc        | 使用说明、开发手册(**应做到尽可能详尽且随版本同步更新**) |      |
   | README.md  | SDK目录结构说明、产品介绍、版本更新日志等                |      |

2. ## 源码构建说明
   1. 编译环境准备
      本项目主要用到的构建工具以及第三方库如下(版本不做要求,默认按最新版本,若出现问题,请锻炼一下自己的折腾能力):
      * **必需(核心框架库所需)**:**cmake**、**boost**、**qt**、**pugixml**、**fmt**、**spdlog**
      * 可选(一些简单使用示例插件所需):**nlohmann-json**、**qrencode**、**cmark-gfm**、**openssl**、**opencv**
      * 可选(跨语言调用支持):swig、python、jdk
      
      本项目的构建基于CMake构建工具并且编写了一份CMake模块("src/MagicToolBox/module.cmake")以便于快速构建不同类型子项,需要使用者遵守一定的规则(此处仅简单说明,进一步请自学CMake语法做到能够完全读懂甚至优化所提供的模块文件):
      1. 项目所需第三方库,应置于统一目录进行管理,并配置环境变量(ThirdParty)指定为对应目录:

         例:
         * /path/to/thirdparty
            * pugixml
               * include
               * lib
            * boost
               * include
               * lib
            * qt
               * include
               * lib
         
         **注:qt 和 boost 需单独使用"QT_DIR"、"BOOST_DIR"环境变量指定路径**

         建议使用**vcpkg**(Windows)/**homebrew**(Mac)管理用到的三方库

      2. 一般地,对于每个具体的子项(CMakeTarget),其目录结构也尽量保持一致

         例:
         * /path/to/target
            * include
               * target
            * src
            * resource
            * CMakeLists.txt
         * CMakeLists.txt
      
   2. 源码编译&安装
      对于初学者而言,建议使用IDE而非直接在linux命令行之类直接命令编译,建议使用的IDE为:**VisualStudio**/**CLion**:
      1. **VisualStudio**:
         "src/scripts"目录下预备了一些简单的构建脚本,按文件名选择适合自己开发环境的执行,即可在"src/build"对应目录下生成构建目录,VisualStudio打开构建目录中的解决方案文件(*.sln)
      2. **CLion**:
         使用CLion指定项目文件"src/MagicToolBox/CMakeLists.txt"打开工作区
      
      按上述操作即可以直观地看到项目的目录结构,按IDE默认操作编译即可

      **注:执行编译安装(“Install”),默认将生成的文件部署到"src"同级目录下,即生成上面的目录结构**
