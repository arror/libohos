cmake_minimum_required(VERSION 3.15)

include($ENV{OHOS_NDK_HOME}/native/build/cmake/ohos.toolchain.cmake)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(ohos)

add_library(ohos SHARED ${CMAKE_SOURCE_DIR}/ohos.c) 

target_link_libraries(ohos PUBLIC libhilog_ndk.z.so)
target_link_libraries(ohos PUBLIC libnet_connection.so)