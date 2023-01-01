#ifndef CUBE_H
#define CUBE_H

#include <vector>

#include "object.h"
#include "quad.h"
#include "../utils/color.h"

class Cube : public Object {
public:
    Point3D origin;
    Vector3D width, height, length;
    Color color;
    std::vector <Quad> faces;

public:
    Cube(Point3D origin, Vector3D width, Vector3D height, Vector3D length, Color color);
};

#endif //CUBE_H
