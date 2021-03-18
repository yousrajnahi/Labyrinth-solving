#include"fonctions.h"



point tab[L][L];

void connect_cell(point u, point v)//casser le mur entre deux cellules blanches 
{
    point p;

    if (u.x == v.x)
    {
        if (v.y < u.y)
        {
            p.y = u.y - 1;
            p.x = u.x;
            tab[p.x][p.y].val = 0;


        }
        else
        {
            p.y = v.y - 1;
            p.x = v.x;
            tab[p.x][p.y].val = 0;
        }

    }
    else if (u.y == u.y)
    {
        if (v.x > u.x)
        {
            p.y = u.y;
            p.x = u.x + 1;
            tab[p.x][p.y].val = 0;

        }
        else
        {
            p.y = v.y;
            p.x = v.x + 1;
            tab[p.x][p.y].val = 0;

        }

    }
}