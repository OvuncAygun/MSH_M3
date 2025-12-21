cmake_minimum_required(VERSION 3.10)
project(MSH_M3 LANGUAGES CXX)

add_library(MSH_M3)

target_link_libraries(MSH_M3 PUBLIC MSH_M1)
target_link_libraries(MSH_M3 PUBLIC MSH_M2)

target_include_directories(MSH_M3
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
    
    PRIVATE
        src
)

target_sources(MSH_M3
    PRIVATE
        src/MSH_M3.cpp
        src/ModeManager.cpp      
        src/ModeStrategies.cpp   
    
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include/MSH_M3.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/IModeManager.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/IModeStrategy.h
)

include(CTest)
enable_testing()

