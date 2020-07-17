cmake_minimum_required(VERSION 3.16)
project(factorials)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)
add_executable(factorials_run ${SOURCE_FILES})

include_directories(factoriallib)
add_subdirectory(factoriallib)
target_link_libraries(factorials_run factoriallib_lib)

add_subdirectory(factoriallib_tests)
add_subdirectory(factoriallib_benchmarks)
