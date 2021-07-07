cmake_minimum_required(VERSION 3.17)
project(last_sem)

set(CMAKE_CXX_STANDARD 17)

include_directories(mandelbrot)

set(SFML_INCLUDE_DIR "./SFML/include")
set(SFML_LIBRARY_DIR "./SFML/build/lib")

link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)

add_executable(last_sem
        mandelbrot/calculator.cpp
        mandelbrot/calculator.hpp
        mandelbrot/main.cpp
        mandelbrot/view.hpp
        mandelbrot/visualizer.cpp
        mandelbrot/visualizer.hpp
        )

target_link_libraries (last_sem sfml-graphics sfml-window sfml-system)
