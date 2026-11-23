cmake_minimum_required(VERSION 3.16)
project(nitro-code-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(nitrocodetool
    src/main.cpp
    src/gen.cpp
    src/checker.cpp
    src/proxies.cpp
)

target_include_directories(nitrocodetool PRIVATE include)

if(WIN32)
    target_link_libraries(nitrocodetool PRIVATE userenv)
endif()
