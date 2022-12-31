#ifndef QUAD_H
#define QUAD_H

#include "object.h"
#include "triangle3D.h"

class Quad : public Object {
public:
    Point3D origin;
    Vector3D width;
    Vector3D height;
    Triangle3D t1;
    Triangle3D t2;


public:
    Quad(Point3D origin, Vector3D width, Vector3D height) : origin(origin), width(width), height(height) {
        type = ObjectType::QUAD;
        t1 = Triangle3D(origin, origin + width, origin + height);
        t2 = Triangle3D(origin + height, origin + width, origin + width + height);
    };
};
#endif //QUAD_H
