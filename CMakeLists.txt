cmake_minimum_required(VERSION 3.2)
project(pairing C CXX)

include_directories("ext")
include_directories("src")

add_subdirectory(src)
add_subdirectory(test)
enable_testing()
