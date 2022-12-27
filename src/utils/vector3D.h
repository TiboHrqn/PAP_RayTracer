#ifndef VECTOR3D_H
#define VECTOR3D_H


class Vector3D : public {
    public:
        float x, y, z;

    public:
        Vector3D(float x, float y, float z) : x(x), y(y), z(z) {};
        Vector3D() : Vector3D(0, 0, 0) {};
        Vector3D(Vector3D & p1, Vector3D & p2) : Vector3D(p2.x - p1.x, p2.y - p1.y, p2.z - p1.z) {};

        Vector3D operator+(const Vector3D &);
        Vector3D operator-(const Vector3D &);
        Vector3D operator-();
        Vector3D operator*(const float &);
        float operator*(const Vector3D &);
        friend Vector3D operator*(const float &, Vector3D &);
        Vector3D operator/(const float &);
        bool operator==(const Vector3D &);
        bool operator!=(const Vector3D &);

        float norm();
        Vector3D normalize();

};

typedef Vector3D Point3D;

#endif //VECTOR3D_H
