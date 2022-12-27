#ifndef PLANE_H
#define PLANE_H

#include "object.h"

class Plane : public Object {
public:
    Point3D point;
    Vector3D normal;

public:
    Plane(Point3D point, Vector3D normal) : point(point), normal(normal.normalize()) {
        type = ObjectType::PLANE;
    };
};

#endif //PLANE_H
