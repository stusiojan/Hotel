#include "PseudorandomNumberGenerator.hpp"

PseudorandomNumberGenerator::PseudorandomNumberGenerator(){
    std::random_device rd;
    generator = std::mt19937(rd());
    distribution = std::uniform_real_distribution<double>(0, 1);
}

int PseudorandomNumberGenerator::generate(int min, int max){
    return distribution(generator) * (max - min) + min;
}