#ifndef SDL_H
#define SDL_H

#include <SDL.h>
#include "../include/objects.h"

class Sdl {
    public:
        SDL_EVent e;
        SDL_Window* window;
        SDL_Renderer* renderer;

    public:

        Sdl(int width, int height);


        void clear();
        void drawTriangle(Triangle2D);
        void show();
}

#endif