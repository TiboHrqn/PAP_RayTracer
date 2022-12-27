#include "Vector2D.h"

Vector2D Vector2D::operator+(const Vector2D & v) {
    return Vector2D(x + v.x, y + v.y);
}

Vector2D Vector2D::operator-(const Vector2D & v) {
    return Vector2D(x - v.x, y - v.y);
}

Vector2D Vector2D::operator-() {
    return Vector2D(-x, -y);
}

Vector2D Vector2D::operator*(const float & m) {
    return Vector2D(m*x, m*y);
}

float Vector2D::operator*(const Vector2D & v) {
    return x*v.x + y*v.y;
}

Vector2D operator*(const float & m, Vector2D & p) {
    return p*m;
}

Vector2D Vector2D::operator/(const float & m) {
    return Vector2D(x/m, y/m);
}

bool Vector2D::operator==(const Vector2D & v) {
    return v.x == x && v.y == y;
}

bool Vector2D::operator!=(const Vector2D & v) {
    return !(*this == v);
}


float Vector2D::norm() {
    return sqrt(x*x + y*y);
}

Vector2D Vector2D::normalize() {
    return (*this) / norm();
}