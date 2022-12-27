#include "Color.h"

//m need to be between 0 and 1
Color Color::operator*(float m) {
    return Color(m*r, m*g, m*b);
}

Color operator*(float m, Color c) {
    return c*m;
}
