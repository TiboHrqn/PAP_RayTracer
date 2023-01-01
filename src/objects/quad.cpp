#include "quad.h"

Quad::Quad(Point3D origin, Vector3D width, Vector3D height, Color color)  : origin(origin), width(width), height(height), color(color) {
    type = ObjectType::QUAD;
    t1 = Triangle3D(origin, origin + width, origin + height, color);
    t2 = Triangle3D(origin + height, origin + width, origin + width + height, color);
}