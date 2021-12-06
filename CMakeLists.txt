cmake_minimum_required (VERSION 3.8)

project (mathlibc)

if (WIN32)
    add_definitions("-D_CRT_SECURE_NO_WARNINGS")
    add_definitions("-D_CRT_SCL_SECURE_NO_WARNINGS")
    add_definitions("-D_CRT_SECURE_NO_DEPRECATE")
    add_definitions("-D_CRT_NONSTDC_NO_DEPRECATE")
endif(WIN32)

add_subdirectory("src")
add_subdirectory("test")

add_subdirectory("external/gtest")