#include "object.h"
#include "triangle2D.h"
#include "triangle3D.h"
#include <cmath>

Triangle2D::Triangle2D(Camera camera, Triangle3D t){
    color = t.color;
    p1 = Point2D(camera, t.p1);
    p2 = Point2D(camera, t.p2);
    p3 = Point2D(camera, t.p3);
}

bool Triangle2D::isIn(Point2D p){
    Vector2D v = Vector2D(p.x, p.y);
    Vector2D v1 = Vector2D(p1.x, p1.y);
    Vector2D v2 = Vector2D(p2.x, p2.y);
    Vector2D v3 = Vector2D(p3.x, p3.y);

    return ((v-v1).area(v2-v1) >=0 && (v-v2).area(v3-v2) >=0 && (v-v3).area(v1-v3)>=0) || ((v-v1).area(v2-v1) <=0 && (v-v2).area(v3-v2) <=0 && (v-v3).area(v1-v3)<=0);
}

int Triangle2D::top(){
    return std::max(std::max(p1.y, p2.y), p3.y);
}

int Triangle2D::left(){
    return std::min(std::min(p1.x, p2.x), p3.x);
}

int Triangle2D::bottom(){
    return std::min(std::min(p1.y, p2.y), p3.y);
}

int Triangle2D::right(){
    return std::max(std::max(p1.x, p2.x), p3.x);
}