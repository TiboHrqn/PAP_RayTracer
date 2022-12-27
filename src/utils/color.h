#ifndef COLOR_H
#define COLOR_H

class Color{
    public:
        unsigned char r, g, b;

    public:
        Color(unsigned char r, unsigned char g, unsigned char b) : r(r), g(g), b(b) {};
        Color(unsigned char c) : Color(c, c, c) {};
        Color() : Color(0) {};

        Color operator*(float);
        friend Color operator*(float, Color);

};


#endif //COLOR_H