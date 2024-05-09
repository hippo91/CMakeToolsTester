set(libname Fibonacci)

add_library(${libname} SHARED fibonacci.cpp)

target_include_directories(${libname} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")