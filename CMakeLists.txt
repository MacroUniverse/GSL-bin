cmake_minimum_required (VERSION 2.6)
project (GSL-bin)

include_directories ("${CMAKE_SOURCE_DIR}")
link_directories("${CMAKE_SOURCE_DIR}")

add_executable (GSL-bin Source.cpp)
target_link_libraries(GSL-bin gsl)
target_link_libraries(GSL-bin gslcblas)
