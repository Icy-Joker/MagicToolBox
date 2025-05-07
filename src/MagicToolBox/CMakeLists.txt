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
add_subdirectory("Applications")#
add_subdirectory("Examples")#
add_subdirectory("Libraries")#
add_subdirectory("Modules")#
add_subdirectory("Plugins")#
add_subdirectory("Tests")#
add_subdirectory("Tools")#
