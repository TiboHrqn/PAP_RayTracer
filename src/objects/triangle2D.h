#ifndef TRIANGLE2D_H
#define TRIANGLE2D_H

#include "object.h"
#include "point2D.h"
#include "triangle3D.h"
#include "../utils/color.h"

class Triangle2D : public Object {
    public:
        Point2D p1, p2, p3;

        Color color;

    public:
        Triangle2D(Point2D p1, Point2D p2, Point2D p3, Color color) : p1(p1), p2(p2), p3(p3), color(color) {
            type = ObjectType::TRIANGLE2D;
        };

        Triangle2D(Camera camera, Triangle3D t);

        bool isIn(Point2D);

        int top();
        int left();
        int bottom();
        int right();
};

#endif //TRIANGLE2D_H
