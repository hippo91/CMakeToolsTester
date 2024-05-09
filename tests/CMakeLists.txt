add_executable(test_fibonacci test_fibonacci.cpp)

target_link_libraries(test_fibonacci
  PRIVATE
    GTest::gtest_main
    Fibonacci
)

include(GoogleTest)
gtest_discover_tests(test_fibonacci)