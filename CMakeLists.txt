cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

project(final LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_library(flint REQUIRED)


add_executable(final
  main.cpp
  widget.cpp
  widget.hpp
  widget.ui
  polinomial.cpp
  polinomial.hpp
)

target_link_libraries(final PRIVATE Qt5::Widgets flint)
