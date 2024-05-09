#include <iostream>
#include <cstdlib>
#include "fibonacci.h"

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <n>\n";
        std::cerr << "This program computes the first <n> terms of the Fibonacci sequence and the <n>th term.\n";
        std::cerr << "<n> should be a positive integer.\n";
        return 1;
    }

    auto parseArgument = [](char* arg) -> std::size_t {
        try {
            return std::stoul(arg);
        } catch (const std::invalid_argument& ia) {
            std::cerr << "Invalid argument: " << ia.what() << '\n';
            std::exit(1);
        } catch (const std::out_of_range& oor) {
            std::cerr << "Out of range: " << oor.what() << '\n';
            std::exit(1);
        }
    };

    const auto n = parseArgument(argv[1]);

    const auto& sequence = computeFibonacciSequence(n);
    std::cout << "Fibonacci sequence up to term " << n << ": ";
    for (const auto& term : sequence)
    {
        std::cout << term << " ";
    }
    std::cout << "\n";

    const auto& nthTerm = computeNthTerm(n);
    std::cout << "The " << n << "th term of the Fibonacci sequence is: " << nthTerm << "\n";

    return 0;
}