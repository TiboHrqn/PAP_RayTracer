
#ifndef CAMERA_H
#define CAMERA_H

#include "../utils/vector3D.h"


class Camera{
    public:   
        Point3D position;

        ReferenceFrame3D reference; //i is forward, j is up, k is right

        float screenDistance = 10;

        float screenWidth = 10;

        float screenHeight = 10;

    public:
        Camera(Point3D position, ReferenceFrame3D reference) : position(position), reference(reference) {};
        Camera(Point3D position, Vector3D i, Vector3D j, Vector3D k) : position(position), reference(ReferenceFrame3D(i, j, k)) {};

        Point3D getScreenCenter();
        Point3D getTopLeftCorner();
        Point3D getTopRightCorner();
        Point3D getBottomLeftCorner();
        Point3D getBottomRightCorner();
};


#endif //CAMERA_H
