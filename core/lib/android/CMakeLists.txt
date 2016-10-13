cmake_minimum_required(VERSION 3.4.1)

add_library(
             core
             SHARED
             src/main/cpp/native-core.cpp
)

find_library(
              log-lib
              log
)

target_link_libraries(
                       core
                       ${log-lib}
)
