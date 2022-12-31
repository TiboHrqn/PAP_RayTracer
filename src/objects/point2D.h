#ifndef POINT2D_H
#define POINT2D_H

#include "../utils/vector3D.h"
#include "../environment/camera.h"


class Point2D{
    public:   
        int x;
        int y;
        float z;


    public:
        Point2D(int x, int y, float z) : x(x), y(y) , z(z) {};
        Point2D(Camera camera, Point3D point3d);

};


#endif //POINT2D_H