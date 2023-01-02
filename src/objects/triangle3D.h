#ifndef TRIANGLE3D_H
#define TRIANGLE3D_H

#include "object.h"
#include "../utils/color.h"

class Triangle3D : public Object {
    public:
        Point3D p1, p2, p3;

        Color color;

    public:
        Triangle3D(Point3D p1, Point3D p2, Point3D p3, Color color) : p1(p1), p2(p2), p3(p3), color(color) {
            type = ObjectType::TRIANGLE3D;
        };
        Triangle3D();
};

#endif //TRIANGLE3D_H
