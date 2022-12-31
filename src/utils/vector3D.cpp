#include <cmath>
#include "vector3D.h"
#include "vector2D.h"

const Vector3D Vector3D::i3D(1, 0, 0);
const Vector3D Vector3D::j3D(0, 1, 0);
const Vector3D Vector3D::k3D(0, 0, 1);

float Vector3D::angleHorizontal(const Vector3D p){
    Vector2D p1 = Vector2D(x,z);
    Vector2D p2 = Vector2D(p.x, p.z);
    return acos(p1*p2/p1.norm()/p2.norm());
}

float Vector3D::angleVertical(const Vector3D p){
    Vector2D p1 = Vector2D(y,z);
    Vector2D p2 = Vector2D(p.y, p.z);
    return acos(p1*p2/p1.norm()/p2.norm());
}

Vector3D Vector3D::operator+(const Vector3D & v) {
    return Vector3D(x + v.x, y + v.y, z + v.z);
}

Vector3D Vector3D::operator-(const Vector3D & v) {
    return Vector3D(x - v.x, y - v.y, z - v.z);
}

Vector3D Vector3D::operator-() {
    return Vector3D(-x, -y, -z);
}

Vector3D Vector3D::operator*(const float & m) {
    return Vector3D(m*x, m*y, m*z);
}

float Vector3D::operator*(const Vector3D & v) {
    return x*v.x + y*v.y + z*v.z;
}

Vector3D operator*(const float & m, Vector3D & p) {
    return p*m;
}

Vector3D Vector3D::operator/(const float & m) {
    return Vector3D(x/m, y/m, z/m);
}

bool Vector3D::operator==(const Vector3D & v) {
    return v.x == x && v.y == y && v.z == z;
}

bool Vector3D::operator!=(const Vector3D & v) {
    return !(*this == v);
}


float Vector3D::norm() {
    return sqrt(x*x + y*y + z*z);
}

Vector3D Vector3D::normalize() {
    return (*this) / norm();
}