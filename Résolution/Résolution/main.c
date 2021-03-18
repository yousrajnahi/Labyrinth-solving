#include"fonctions.h"


int main(int argc, char* argv[])
{
    srand(time(NULL));
    isRunning = Initialisation_creation();
    processInput();
    while (isRunning)
    {
        setup();
        Labyrinthe();
        Labyninthe_cyc();
        entree_sortie();
        matrice_adj();
        end_start_node();
        enregister_labyrinthe();
        dijkstra(M, N, startnode, endnode1);
        recuperer_labyrinthe();
        render();
        dijkstra(M, N, startnode, endnode2);
        SDL_Delay(1000);
    }
    Quiter_detruire();
    return 0;

}