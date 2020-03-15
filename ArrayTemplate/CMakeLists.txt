cmake_minimum_required(VERSION 3.5)

project(ArrayTemplate LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5Core)

add_executable(ArrayTemplate
  main.cpp
)
target_link_libraries(ArrayTemplate Qt5::Core)
