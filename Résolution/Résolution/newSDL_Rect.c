#include"fonctions.h"

SDL_Rect newSDL_Rect(int xs, int ys, int widths, int heights)//creation d'un rectangle
{
    SDL_Rect rectangular;
    rectangular.x = xs;
    rectangular.y = ys;
    rectangular.w = widths;
    rectangular.h = heights;
    return rectangular;
}