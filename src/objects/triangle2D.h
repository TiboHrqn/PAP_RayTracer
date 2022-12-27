#ifndef TRIANGLE2D_H
#define TRIANGLE2D_H

#include "object.h"

class Triangle2D : public Object {
    public:
        Point2D p1, p2, p3;

    public:
        Triangle2D(Point2D p1, Point2D p2, Point2D p3) : p1(p1), p2(p2), p3(p3){
            type = ObjectType::TRIANGLE2D;
        };
};

#endif //TRIANGLE2D_H