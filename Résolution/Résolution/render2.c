#include"fonctions.h"
SDL_Rect rect2[L][L];
point tab[L][L];
void render2(int g, int h)// selon la valeur de g et h on dessine un rectangle marron
{
    SDL_SetRenderDrawColor(renderer, 120, 300, 0, 255);
    rect2[g][h] = newSDL_Rect(tab[g][h].x + g * pix + 6, tab[g][h].y + h * pix + 6, (pix + 10) / 2, (pix + 10) / 2);
    SDL_RenderFillRect(renderer, &rect2[g][h]);
    SDL_RenderPresent(renderer);

}