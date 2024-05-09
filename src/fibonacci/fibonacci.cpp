#include "fibonacci.h"
#include <limits>
#include <stdexcept>

std::vector<std::size_t> computeFibonacciSequence(const std::size_t n)
{
  std::vector<std::size_t> sequence;
  sequence.reserve(n);

  sequence.push_back(0);
  if (n > 1)
    sequence.push_back(1);

  for (std::size_t i{2}; i < n; i++)
  {
    const std::size_t &previousTerm = sequence[i - 1];
    const std::size_t &twoTermsAgo = sequence[i - 2];
    if (std::numeric_limits<std::size_t>::max() - previousTerm < twoTermsAgo)
    {
      throw std::overflow_error("Fibonacci sequence value overflow");
    }
    sequence.push_back(previousTerm + twoTermsAgo);
  }

  return sequence;
}

std::size_t computeNthTerm(const std::size_t n)
{
  if (n <= 0)
  {
    throw std::out_of_range("n must be greater than 0");
  }

  if (n == 1)
    return 0;
  if (n == 2)
    return 1;

  std::size_t currentTerm{0};
  std::size_t nextTerm{1};

  for (std::size_t i{2}; i < n; i++)
  {
    if (std::numeric_limits<std::size_t>::max() - nextTerm < currentTerm)
    {
      throw std::overflow_error("Fibonacci sequence value overflow");
    }
    const std::size_t newTerm{currentTerm + nextTerm};
    currentTerm = nextTerm;
    nextTerm = newTerm;
  }

  return nextTerm;
}