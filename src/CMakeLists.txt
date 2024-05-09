add_subdirectory(fibonacci)

add_executable(fibo main.cpp)

target_link_libraries(fibo PRIVATE Fibonacci)