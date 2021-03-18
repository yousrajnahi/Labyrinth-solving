#include"fonctions.h"

point tab[L][L];
int tab_init[L][L];
void recuperer_labyrinthe()
{
    for (i = 0; i < L; i++) {
        for (j = 0; j < L; j++) {
            tab[i][j].val = tab_init[i][j];
        }
    }
    SDL_Delay(1000);
}