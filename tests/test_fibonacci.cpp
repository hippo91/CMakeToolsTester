#include "fibonacci.h"
#include "gtest/gtest.h"

TEST(FibonacciTest, TestComputeFibonacciSequence0) {
    // Test for n = 0
    std::vector<std::size_t> expected0 = {0};
    EXPECT_EQ(computeFibonacciSequence(0), expected0);
}

TEST(FibonacciTest, TestComputeFibonacciSequence1) {
    // Test for n = 1
    std::vector<std::size_t> expected1 = {0};
    EXPECT_EQ(computeFibonacciSequence(1), expected1);
}

TEST(FibonacciTest, TestComputeFibonacciSequence2) {
    // Test for n = 2
    std::vector<std::size_t> expected2 = {0, 1};
    EXPECT_EQ(computeFibonacciSequence(2), expected2);
}

TEST(FibonacciTest, TestComputeFibonacciSequence5) {
    // Test for n = 5
    std::vector<std::size_t> expected5 = {0, 1, 1, 2, 3};
    EXPECT_EQ(computeFibonacciSequence(5), expected5);
}

TEST(FibonacciTest, TestComputeFibonacciSequence10) {
    // Test for n = 10
    std::vector<std::size_t> expected10 = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    EXPECT_EQ(computeFibonacciSequence(10), expected10);
}

// Test for length error exception during vector::reserve
TEST(FibonacciTest, TestComputeFibonacciLengthError) {
    EXPECT_THROW(computeFibonacciSequence(std::numeric_limits<std::size_t>::max()), std::length_error);
}

// Test for overflow exception
TEST(FibonacciTest, TestComputeFibonacciOverflowError) {
    EXPECT_THROW(computeFibonacciSequence(100), std::overflow_error);
}

TEST(FibonacciTest, TestComputeNthTerm1) {
    // Test for n = 1
    EXPECT_EQ(computeNthTerm(1), 0);
}

TEST(FibonacciTest, TestComputeNthTerm2) {
    // Test for n = 2
    EXPECT_EQ(computeNthTerm(2), 1);
}

TEST(FibonacciTest, TestComputeNthTerm5) {
    // Test for n = 5
    EXPECT_EQ(computeNthTerm(5), 3);
}

TEST(FibonacciTest, TestComputeNthTerm10) {
    // Test for n = 10
    EXPECT_EQ(computeNthTerm(10), 34);
}

// Test for overflow exception
TEST(FibonacciTest, TestComputeNthTermOverflow) {
    EXPECT_THROW(computeNthTerm(std::numeric_limits<std::size_t>::max()), std::overflow_error);
}