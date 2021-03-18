#include"fonctions.h"


point stack[9999], tab[L][L], nextp, p;

void Labyrinthe()// generation du labyrinthe
{
    int c = 1;
    int b = 1;
    int u, v;

    do {
        u = rand() % L;

    } while (u % 2 == 0);

    do {
        v = rand() % L;

    } while (v % 2 == 0);


    p = tab[u][v];
    stack[0] = p;
    while (b < (L / 2) * (L / 2))
    {
        tab[p.x][p.y].vsi = 1;
        while (verifier(p) == 1)
        {
            c--;
            p = stack[c];
        }
        nextp = rand_vois_nonvi(p);
        stack[c] = nextp;
        connect_cell(p, nextp);
        render();
        SDL_Delay(100);
        p = nextp;
        c++;
        b++;
    }
}