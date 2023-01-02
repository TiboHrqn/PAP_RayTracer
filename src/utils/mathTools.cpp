#include <cmath>

#include "mathTools.h"



/**
    * Checks if a quadratic equation has real roots (Not used, but was meant to be used for raytracing a sphere)
    * @param a in ax^2 + bx + c = 0
    * @param b
    * @param c
    * @return true if the equation has at least one real root, false otherwise
    */
bool hasRoots(const float &a, const float &b, const float &c) {
    if (b * b - 4 * a * c < 0)
        return false;
    else 
        return true;
}

/**
    * Compute the real roots of a quadratic equation, assuming they exist (Not used, but was meant to be used for raytracing a sphere)
    * @param a in ax^2 + bx + c = 0
    * @param b
    * @param c
    * @return the real roots of the equation
    */
std::vector<float> getRoots(const float &a, const float &b, const float &c) {
    std::vector<float> solutions;
    solutions.push_back((-b - sqrt(b * b - 4 * a * c)) / 2 * a);
    solutions.push_back((-b + sqrt(b * b - 4 * a * c)) / 2 * a);
    return solutions;
}

