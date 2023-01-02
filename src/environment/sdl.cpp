#include "sdl.h"

Sdl::Sdl(int width, int height){
    //SDL_Init(SDL_INIT_VIDEO);
    //SDL_CreateWindowAndRenderer( width, height, 0, &window, &renderer);
};

void Sdl::clear(){
    //SDL_SetRenderDrawColor(renderer, 0,0,0,255);
    //SDL_RenderClear(renderer);
}

void Sdl::drawTriangle(Triangle2D t){
   //SDL_SetRenderDrawColor(renderer, t.color.r,t.color.g,t.color.b,255);
    for (int i = t.top(); i>t.bottom(); i--){
        for (int j = t.left();  j< t.right(); j++){
            Point2D p = Point2D(j, i, 0);
            if (t.isIn(p)){
                //SDL_RenderDrawPointF(renderer, j, i);
            }
        }
    }
}

void Sdl::show(){
    //Sdl_RenderPresent(renderer);
}