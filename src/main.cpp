#include "PseudorandomNumberGenerator.hpp"

#include <iostream>

int main () {
    PseudorandomNumberGenerator generator;
    std::cout << generator.generate(0, 10) << std::endl;
    return 0;
};