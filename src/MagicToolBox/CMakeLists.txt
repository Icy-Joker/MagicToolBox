cmake_minimum_required(VERSION "3.19.0")

project("MagicToolBox" DESCRIPTION "MagicToolBox" VERSION "0.0.0.0")

include("${PROJECT_SOURCE_DIR}/module.cmake")

importTarget("BasicSupport")#
importTarget("BasicFramework")#
importTarget("BasicUIFramework")#
importTarget("CustomFramework")#
importTarget("CustomFramework4CSharp")#
importTarget("CustomFramework4Java")#
importTarget("CustomFramework4Python")#

#add_subdirectory("")#
add_subdirectory("00_Libraries")#
add_subdirectory("01_Modules")#
add_subdirectory("02_Plugins")#
add_subdirectory("03_Applications")#
add_subdirectory("04_Tools")#
add_subdirectory("05_Examples")#
add_subdirectory("06_Tests")#
