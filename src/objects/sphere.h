#ifndef SPHERE_H
#define SPHERE_H

#include "object.h"

class Sphere : public Object {
    public:
        Point3D center;
        float radius;

    public:
        Sphere(Point3D center, float radius) : center(center), radius(radius) {
            type = ObjectType::SPHERE;
        };
};

#endif //SPHERE_H
