#include"fonctions.h"

point tab[L][L];

point rand_vois_nonvi(point p)// choisir parmis les voisins ceux qui ne sont pas visité
{
    point v;
    do {
        v = rand_vois(p);

    } while (tab[v.x][v.y].vsi == 1);
    return(v);
}