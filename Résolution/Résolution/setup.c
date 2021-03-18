#include"fonctions.h"

int i, j;
point tab[L][L];

void setup()// revenir à létat initial
{

    for (i = 0; i < L; i++)
    {
        for (j = 0; j < L; j++)
        {
            tab[i][j].vsi = 0;
        }
    }

    for (i = 0; i < L; i++)
    {

        for (j = 0; j < L; j++)
        {
            if (i == 0 || i == L - 1 || j == 0 || j == L - 1)
            {
                tab[i][j].val = 8;
                tab[i][j].x = i;
                tab[i][j].y = j;
            }
            else
            {
                tab[i][j].val = 0;
                tab[i][j].x = i;
                tab[i][j].y = j;

            }

        }
    }

    for (i = 0; i < L - 2; i = i + 2)
    {

        for (j = 0; j < L - 1; j++)
        {
            tab[i][j].val = 8;
            tab[i][j].x = i;
            tab[i][j].y = j;

        }
    }

    for (i = 0; i < L - 1; i++)
    {

        for (j = 0; j < L - 2; j = j + 2)
        {
            tab[i][j].val = 8;
            tab[i][j].x = i;
            tab[i][j].y = j;

        }
    }

    L1 = L - 1;
    L2 = L - 2;
    L3 = L - 3;
}