#include "object.h"
#include "triangle3D.h"

Triangle3D::Triangle3D(){
    p1 = Point3D(-1,0,0);
    p2 = Point3D(1,0,0);
    p3 = Point3D(0,1,1);
    color = Color(255,255,255);
}