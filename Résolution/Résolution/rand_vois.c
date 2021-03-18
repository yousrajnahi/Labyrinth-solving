#include"fonctions.h"

point rand_vois(point p)// recherche des voisins possible de p selon sa position
{
    int a;
    point v;
    if (p.x == 1 && p.y == 1)
    {
        a = rand() % 2;
        if (a == 0)
        {
            v.x = p.x;
            v.y = p.y + 2;
            return(v);
        }
        else if (a == 1)
        {
            v.x = p.x + 2;
            v.y = p.y;
            return(v);
        }

    }
    else if (p.x == L - 2 && p.y == 1)
    {
        a = rand() % 2;
        if (a == 0)
        {
            v.x = p.x - 2;
            v.y = p.y;
            return(v);
        }
        else if (a == 1)
        {
            v.x = p.x;
            v.y = p.y + 2;
            return(v);
        }

    }
    else if (p.x == 1 && p.y == L - 2)
    {
        a = rand() % 2;
        if (a == 0)
        {
            v.x = p.x + 2;
            v.y = p.y;
            return(v);
        }
        else if (a == 1)
        {
            v.x = p.x;
            v.y = p.y - 2;
            return(v);
        }

    }
    else if (p.x == L - 2 && p.y == L - 2)
    {
        a = rand() % 2;
        if (a == 0)
        {
            v.x = p.x - 2;
            v.y = p.y;
            return(v);
        }
        else if (a == 1)
        {
            v.x = p.x;
            v.y = p.y - 2;
            return(v);
        }

    }
    else if (p.x == 1 && (p.y < L - 2 && p.y>1))
    {
        a = rand() % 3;
        if (a == 0)
        {
            v.x = p.x;
            v.y = p.y - 2;
            return(v);
        }
        else if (a == 1)
        {
            v.x = p.x;
            v.y = p.y + 2;
            return(v);
        }
        else if (a == 2)
        {
            v.x = p.x + 2;
            v.y = p.y;
            return(v);
        }

    }
    else if (p.x == L - 2 && (p.y < L - 2 && p.y>1))
    {
        a = rand() % 3;
        if (a == 0)
        {
            v.x = p.x;
            v.y = p.y - 2;
            return(v);
        }
        else if (a == 1)
        {
            v.x = p.x;
            v.y = p.y + 2;
            return(v);
        }
        else if (a == 2)
        {
            v.x = p.x - 2;
            v.y = p.y;
            return(v);
        }

    }
    else if (p.y == 1 && (p.x < L - 2 && p.x>1))
    {
        a = rand() % 3;
        if (a == 0)
        {
            v.x = p.x - 2;
            v.y = p.y;
            return(v);
        }
        else if (a == 1)
        {
            v.x = p.x + 2;
            v.y = p.y;
            return(v);
        }
        else if (a == 2)
        {
            v.x = p.x;
            v.y = p.y + 2;
            return(v);
        }

    }
    else if (p.y == L - 2 && (p.x < L - 2 && p.x>1))
    {
        a = rand() % 3;
        if (a == 0)
        {
            v.x = p.x - 2;
            v.y = p.y;
            return(v);
        }
        else if (a == 1)
        {
            v.x = p.x + 2;
            v.y = p.y;
            return(v);
        }
        else if (a == 2)
        {
            v.x = p.x;
            v.y = p.y - 2;
            return(v);
        }

    }
    else if (p.val != 8)
    {
        a = rand() % 4;
        if (a == 0)
        {
            v.x = p.x - 2;
            v.y = p.y;
            return(v);
        }
        else if (a == 1)
        {
            v.x = p.x + 2;
            v.y = p.y;
            return(v);
        }
        else if (a == 2)
        {
            v.x = p.x;
            v.y = p.y + 2;
            return(v);
        }
        else if (a == 3)
        {
            v.x = p.x;
            v.y = p.y - 2;
            return(v);
        }
    }

}