#ifndef OBJECT_H
#define OBJECT_H

#include "../include/utils.h"

enum ObjectType {
    SPHERE,
    PLANE,
    QUAD,
    CUBE,
    TRIANGLE3D,
    TRIANGLE2D
};

class Object {
    public:
        enum ObjectType type;
        Color color;

    public:
        Object() : color(Color()) {};
};


#endif //OBJECT_H
