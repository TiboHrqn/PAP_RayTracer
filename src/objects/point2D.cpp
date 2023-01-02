#include "point2D.h"
#include <cmath>

Point2D::Point2D(Camera camera, Point3D point3d){
    const float angleX = camera.reference.i.angleHorizontal(point3d - camera.position);
    const float angleY = camera.reference.i.angleVertical(point3d - camera.position);

    x = (int) cos(angleX) * camera.screenDistance + camera.screenWidth/2 +0.5;
    y = (int) cos(angleY) * camera.screenDistance + camera.screenHeight/2 +0.5;
    z = (point3d - camera.position).norm();
}
