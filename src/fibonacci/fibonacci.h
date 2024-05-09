#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <vector>

/********************************************************************************/
/**
 * @brief Compute the Fibonacci sequence up to the nth term
 * 
 * @param n : nth term 
 * @return std::vector<int> 
 */
/********************************************************************************/
std::vector<std::size_t> computeFibonacciSequence(std::size_t n);

/********************************************************************************/
/**
 * @brief Compute the nth term of the Fibonacci sequence
 * 
 * @param n : nth term
 * @return int 
 */
/********************************************************************************/
std::size_t computeNthTerm(std::size_t n);

#endif // FIBONACCI_H