#ifndef QUAD_H
#define QUAD_H

#include "object.h"
#include "triangle3D.h"
#include "../utils/color.h"

class Quad : public Object {
public:
    Point3D origin;
    Vector3D width;
    Vector3D height;
    Color color;
    /**
    * t1 and t2 are two triangles in the quad covering the whole area
    */
    Triangle3D t1;
    Triangle3D t2;


public:
    Quad(Point3D origin, Vector3D width, Vector3D height, Color color);
};
#endif //QUAD_H
