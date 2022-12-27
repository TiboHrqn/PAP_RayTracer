#ifndef QUAD_H
#define QUAD_H

#include "object.h"
class Quad : public Object {
public:
    Point3D origin;
    Vector3D width;
    Vector3D height;

public:
    Quad(Point3D origin, Vector3D width, Vector3D height) : origin(origin), width(width), height(height) {
        type = ObjectType::QUAD;
    };
};
#endif //QUAD_H
