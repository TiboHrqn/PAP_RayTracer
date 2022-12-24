#include <cmath>

#include "MathTools.h"

bool hasRoots(const float &a, const float &b, const float &c) {
    if (b * b - 4 * a * c < 0)
        return false;
    else 
        return true;
}

std::vector<float> getRoots(const float &a, const float &b, const float &c) {
    std::vector<float> solutions;
    solutions.push_back((-b - sqrt(b * b - 4 * a * c)) / 2 * a);
    solutions.push_back((-b + sqrt(b * b - 4 * a * c)) / 2 * a);
    return solutions;
}

