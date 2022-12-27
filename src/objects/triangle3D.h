#ifndef TRIANGLE3D_H
#define TRIANGLE3D_H

#include "object.h"

class Triangle3D : public Object {
    public:
        Point3D p1, p2, p3;

    public:
        Triangle3D(Point3D p1, Point3D p2, Point3D p3) : p1(p1), p2(p2), p3(p3){
            type = ObjectType::TRIANGLE3D;
        };
}

#endif //TRIANGLE3D_H
