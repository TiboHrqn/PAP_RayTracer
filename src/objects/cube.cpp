#include "cube.h"

Cube::Cube(Point3D origin, Vector3D width, Vector3D height, Vector3D length, Color color) : origin(origin), width(width), height(height), length(length), color(color) {
    type = ObjectType::CUBE;
    faces.push_back(Quad(origin, width, height, color));
    faces.push_back(Quad(origin, width, length, color));
    faces.push_back(Quad(origin, height, length, color));
    Point3D s = origin + width + height + length;
    faces.push_back(Quad(s, -width, -height, color));
    faces.push_back(Quad(s, -width, -length, color));
    faces.push_back(Quad(s, -height, -length, color));
}