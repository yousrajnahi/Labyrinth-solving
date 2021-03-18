#include"fonctions.h"

int M[N][N],g,h,L2;

void matrice_adj()
{
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            M[i][j] = 0;
        }
    }
    for (i = 0; i < L2; i++) {
        for (j = 0; j < L2; j++) {
            g = i + 1;
            h = j + 1;
            if (tab[g][h].val == 0) {
                if (tab[g][h - 1].val == 0) M[(L2)*i + j][(L2)*i + j - 1] = 1;
                if (tab[g][h + 1].val == 0) M[(L2)*i + j][(L2)*i + j + 1] = 1;
                if (tab[g - 1][h].val == 0) M[(L2)*i + j][(L2)*i + j - (L2)] = 1;
                if (tab[g + 1][h].val == 0) M[(L2)*i + j][(L2)*i + j + (L2)] = 1;
            }
        }
    }

}