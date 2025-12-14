cmake_minimum_required(VERSION 3.10)
project(MSH_M3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(MSH_M3)

target_include_directories(MSH_M3
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/external
    
    PRIVATE
        src
)

target_sources(MSH_M3
    PRIVATE
        src/MSH_M3.cpp
    
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include/MSH_M3.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/IModeManager.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/IModeStrategy.h
)

include(CTest)
enable_testing()

