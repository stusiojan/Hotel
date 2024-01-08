//

#pragma once

#include <random>

class PseudorandomNumberGenerator{
    private:
        std::mt19937 generator;
        std::uniform_real_distribution<double> distribution;
    public:
        PseudorandomNumberGenerator();
        double generate(int min, int max);
};