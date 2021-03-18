#include"fonctions.h"

int isRunning = false;
void processInput()//manipule la fermeture de la fenetre
{
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type)
    {
    case SDL_QUIT:
    {
        isRunning = false;
        break;
    }
    case SDL_KEYDOWN:
    {
        if (event.key.keysym.sym == SDLK_ESCAPE)
        {
            isRunning = false;
            break;
        }
    }
    }

}