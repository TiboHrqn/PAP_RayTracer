#ifndef RAY_H
#define RAY_H

#include "../include/utils.h"


class Ray : public {
    public:
        Point3D origin;
        Vector3D direction;

    public:
        Ray(Point3D origin, Vector3D direction) : origin(origin), direction(direction.normalize()) {};

        Ray(std::string s) : Ray(json::parse(s)) {};
};


#endif //RAY_H