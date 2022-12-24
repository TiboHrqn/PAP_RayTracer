#ifndef OBJECT_H
#define OBJECT_H

#include "../include/utils.h"

enum ObjectType {
    SPHERE,
    PLANE,
    QUAD,
    CUBE
};

class Object : public {
    public:
        enum ObjectType type;

};

#endif //OBJECT_H
