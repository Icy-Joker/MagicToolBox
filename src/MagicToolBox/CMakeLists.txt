cmake_minimum_required(VERSION "3.19.0")

project("MagicToolBox" DESCRIPTION "MagicToolBox" VERSION "0.0.0.0")

include("${PROJECT_SOURCE_DIR}/module.cmake")

importTarget("BasicSupport")#
importTarget("BasicUIFramework")#
importTarget("CommonFramework")#
importTarget("CustomFramework")#
importTarget("CustomFramework4CSharp")#
importTarget("CustomFramework4Java")#
importTarget("CustomFramework4Python")#

#add_subdirectory("")#
add_subdirectory("00_Modules")#功能模块库目录
add_subdirectory("01_Libraries")#二次开发库目录
add_subdirectory("02_Plugins")#功能插件库目录
add_subdirectory("03_Applications")#核心程序目录
add_subdirectory("04_Tools")#辅助开发工具目录
add_subdirectory("05_Examples")#开发示例代码目录
