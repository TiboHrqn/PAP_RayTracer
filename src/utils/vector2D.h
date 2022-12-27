#ifndef VECTOR2D_H
#define VECTOR2D_H


class Vector2D {
    public:
        float x, y;

    public:
        Vector2D(float x, float y) : x(x), y(y) {};
        Vector2D() : Vector2D(0, 0) {};
        Vector2D(Vector2D & p1, Vector2D & p2) : Vector2D(p2.x - p1.x, p2.y - p1.y) {};

        Vector2D operator+(const Vector2D &);
        Vector2D operator-(const Vector2D &);
        Vector2D operator-();
        Vector2D operator*(const float &);
        float operator*(const Vector2D &);
        friend Vector2D operator*(const float &, Vector2D &);
        Vector2D operator/(const float &);
        bool operator==(const Vector2D &);
        bool operator!=(const Vector2D &);

        float norm();
        Vector2D normalize();

};

typedef Vector2D Point2D;

class ReferenceFrame2D{
    public:
        Vector2D i, j;

        static const Vector3D i2D, j2D;
    
    public:
        ReferenceFrame2D (Vector2D i, Vector2D j) : i(i.normalize()), j(j.normalize()) {};
        ReferenceFrame2D() : ReferenceFrame2D(Vector2D(1,0), Vector2D(0,1)) {};
};

#endif //VECTOR2D_H
