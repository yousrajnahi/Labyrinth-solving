#include<stdio.h>
#include"fonctions.h"

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;

int Initialisation_creation()//initialisation et création de la fenetre et du renderer
{
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        printf("Erreur initialisation SDL\n");
        return(false);
    }
    window = SDL_CreateWindow("Labyrinthe", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, largeur_fenetre, hauteur_fenetre, 0);
    if (!window)
    {
        printf("Erreur ceration fenetre SDL\n");
        return(false);
    }
    renderer = SDL_CreateRenderer(window, -1, 0);
    if (!renderer)
    {
        printf("Erreur cration SDL renderer \n");
        return(false);
    }
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);

    return(true);
}