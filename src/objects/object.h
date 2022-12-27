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

class Object : public {
    public:
        enum ObjectType type;

};

#endif //OBJECT_H
