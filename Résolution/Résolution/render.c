#include"fonctions.h"

int i, j;
point tab[L][L];
SDL_Rect rect[L][L];

void render()//dessine un tableau de rectangle
{
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < L; j++)
        {
            if (tab[i][j].val == 0)
            {
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
                rect[i][j] = newSDL_Rect(tab[i][j].x + i * pix, tab[i][j].y + j * pix, pix + 2, pix + 2);
                SDL_RenderFillRect(renderer, &rect[i][j]);
            }
            else if (tab[i][j].val == 8)
            {
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
                rect[i][j] = newSDL_Rect(tab[i][j].x + i * pix, tab[i][j].y + j * pix, pix + 2, pix + 2);
                SDL_RenderFillRect(renderer, &rect[i][j]);
            }
            else if (tab[i][j].val == 2)
            {
                SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
                rect[i][j] = newSDL_Rect(tab[i][j].x + i * pix, tab[i][j].y + j * pix, pix + 2, pix + 2);
                SDL_RenderFillRect(renderer, &rect[i][j]);

            }
            else if (tab[i][j].val == 3)
            {

                SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
                rect[i][j] = newSDL_Rect(tab[i][j].x + i * pix, tab[i][j].y + j * pix, pix + 2, pix + 2);
                SDL_RenderFillRect(renderer, &rect[i][j]);

            }
            else if (tab[i][j].val == 4)
            {

                SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
                rect[i][j] = newSDL_Rect(tab[i][j].x + i * pix, tab[i][j].y + j * pix, pix + 2, pix + 2);
                SDL_RenderFillRect(renderer, &rect[i][j]);

            }
            else if (tab[i][j].val == 7)
            {
                SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);
                rect[i][j] = newSDL_Rect(tab[i][j].x + i * pix, tab[i][j].y + j * pix, pix + 2, pix + 2);
                SDL_RenderFillRect(renderer, &rect[i][j]);
            }
        }
    }

    SDL_RenderPresent(renderer);
}