#include"fonctions.h"
point tab[L][L];
void Labyninthe_cyc()//pour trouver le plus petit chemin entre deux cases
{
    int x, y;

    for (i = 0; i < L; i++)
    {
        x = 1 + rand() % (L - 2);
        if (x % 2 == 0)
        {
            y = 1 + (rand() % ((L - 2) / 2)) * 2;
        }
        else
        {
            y = 2 + (rand() % ((L - 2) / 2)) * 2;
        }
        tab[x][y].val = 0;

    }

    SDL_Delay(100);
    render();
    SDL_Delay(1000);
}