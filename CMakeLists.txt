cmake_minimum_required(VERSION 3.4.1)

project (AndroidCMakeDemo)

# additions to CMake
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/build" ${CMAKE_MODULE_PATH})

# C++ version setting
include(EnableCXX11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -frtti")

set(APP_DIR "${CMAKE_CURRENT_SOURCE_DIR}/app/android/app")
set(APP_LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/app/lib")

add_subdirectory(${APP_LIB_DIR})
add_subdirectory(${APP_DIR})
