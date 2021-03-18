#include"fonctions.h"

point tab[L][L];

int verifier(point p)//verfication des voisins de p s'ils sont tous vsisite ou non 
{

    if (p.x == 1 && p.y == 1)
    {
        if (tab[p.x][p.y + 2].vsi == 1 && tab[p.x + 2][p.y].vsi == 1)
        {
            return(1);
        }
        else
        {
            return(0);
        }

    }
    else if (p.x == L - 2 && p.y == 1)
    {

        if (tab[p.x - 2][p.y].vsi == 1 && tab[p.x][p.y + 2].vsi == 1)
        {
            return(1);
        }
        else
        {
            return(0);
        }

    }
    else if (p.x == 1 && p.y == L - 2)
    {
        if (tab[p.x + 2][p.y].vsi == 1 && tab[p.x][p.y - 2].vsi == 1)
        {
            return(1);
        }
        else
        {
            return(0);
        }

    }
    else if (p.x == L - 2 && p.y == L - 2)
    {
        if (tab[p.x - 2][p.y].vsi == 1 && tab[p.x][p.y - 2].vsi == 1)
        {
            return(1);
        }
        else
        {
            return(0);
        }


    }
    else if (p.x == 1 && (p.y < L - 2 && p.y>1))
    {
        if (tab[p.x][p.y - 2].vsi == 1 && tab[p.x][p.y + 2].vsi == 1 && tab[p.x + 2][p.y].vsi == 1)
        {
            return(1);
        }
        else
        {
            return(0);
        }


    }
    else if (p.x == L - 2 && (p.y < L - 2 && p.y>1))
    {
        if (tab[p.x][p.y - 2].vsi == 1 && tab[p.x][p.y + 2].vsi == 1 && tab[p.x - 2][p.y].vsi == 1)
        {
            return(1);
        }
        else
        {
            return(0);
        }


    }
    else if (p.y == 1 && (p.x < L - 2 && p.x>1))
    {
        if (tab[p.x - 2][p.y].vsi == 1 && tab[p.x + 2][p.y].vsi == 1 && tab[p.x][p.y + 2].vsi == 1)
        {
            return(1);
        }
        else
        {
            return(0);
        }
    }
    else if (p.y == L - 2 && (p.x < L - 2 && p.x>1))
    {

        if (tab[p.x - 2][p.y].vsi == 1 && tab[p.x + 2][p.y].vsi == 1 && tab[p.x][p.y - 2].vsi == 1)
        {
            return(1);
        }
        else
        {
            return(0);
        }

    }
    else if (p.val != 8)
    {
        if (tab[p.x - 2][p.y].vsi == 1 && tab[p.x + 2][p.y].vsi == 1 && tab[p.x][p.y - 2].vsi == 1 && tab[p.x][p.y + 2].vsi == 1)
        {
            return(1);
        }
        else
        {
            return(0);
        }
    }
}