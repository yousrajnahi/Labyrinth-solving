#include"fonctions.h"

int tab_init[L][L];

void enregister_labyrinthe()
{

    for (i = 0; i < L; i++) {
        for (j = 0; j < L; j++) {
            tab_init[i][j] = tab[i][j].val;
        }
    }
}