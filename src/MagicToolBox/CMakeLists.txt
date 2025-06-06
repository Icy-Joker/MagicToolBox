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
