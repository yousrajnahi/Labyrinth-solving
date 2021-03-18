
#include"fonctions.h"



point tab[L][L],n;
void entree(int g)// choix de l'entree 
{
    int m;
    m = rand() % 3;

    if (m == 0)
    {
        n.x = 0;
        n.y = 1 + rand() % (L - 2);
        if (tab[n.x + 1][n.y].val == 8)
        {
            entree(g);

        }
        else if (tab[n.x][n.y].val != 8)
        {
            entree(g);

        }
        else
        {
            tab[n.x][n.y].val = g;

        }

    }
    else if (m == 1)
    {
        n.x = L - 1;
        n.y = 1 + rand() % (L - 2);
        if (tab[n.x - 1][n.y].val == 8)
        {
            entree(g);

        }
        else if (tab[n.x][n.y].val != 8)//ne pas etre confondu
        {
            entree(g);
        }
        else
        {
            tab[n.x][n.y].val = g;

        }
    }
    else if (m == 2)
    {
        n.x = 1 + rand() % (L - 2);
        n.y = 0;
        if (tab[n.x][n.y + 1].val == 8)
        {
            entree(g);

        }
        else if (tab[n.x][n.y].val != 8)//ne pas etre confondu
        {
            entree(g);
        }
        else
        {
            tab[n.x][n.y].val = g;

        }
    }
    else if (m == 3)
    {
        n.x = 1 + rand() % (L - 2);
        n.y = L - 1;
        if (tab[n.x][n.y - 1].val == 8)
        {
            entree(g);

        }
        else if (tab[n.x][n.y].val != 8)//ne pas etre confondu
        {
            entree(g);
        }
        else
        {
            tab[n.x][n.y].val = g;

        }
    }
}