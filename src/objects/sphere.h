#ifndef SPHERE_H
#define SPHERE_H

#include "object.h"
#include "../utils/color.h"

class Sphere : public Object {
    public:
        Point3D center;
        Color color;
        float radius;

    public:
        Sphere(Point3D center, float radius, Color color) : center(center), radius(radius), color(color) {
            type = ObjectType::SPHERE;
        };
};

#endif //SPHERE_H
