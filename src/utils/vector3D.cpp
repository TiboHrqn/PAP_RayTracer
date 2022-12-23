#include "Vector3D.h"

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