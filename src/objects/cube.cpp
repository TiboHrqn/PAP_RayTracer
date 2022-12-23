#include "cube.h"

Cube::Cube(Point3D origin, Vector3D width, Vector3D height, Vector3D length) : origin(origin), width(width), height(height), length(length) {
    type = ObjectType::CUBE;
    faces.push_back(Quad(origin, width, height));
    faces.push_back(Quad(origin, width, length));
    faces.push_back(Quad(origin, height, length));
    Point3D s = origin + width + height + length;
    faces.push_back(Quad(s, -width, -height));
    faces.push_back(Quad(s, -width, -length));
    faces.push_back(Quad(s, -height, -length));
}