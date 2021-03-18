#pragma once
#include<SDL.h>
#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#define bool int
#define true 1
#define false 0
#define hauteur_fenetre 714
#define largeur_fenetre 714
#define L  23
#define pix 30
#define N  (L-2)*(L-2)// nbr de noeuds
#define INF 99999

typedef struct point
{
    int x;
    int y;
    int val;
    int vsi;

}point;


extern  int i, j,M[N][N],g,h,L1,L2,L3,a2, b2, a3, b3, a4, b4,startnode, endnode1, endnode2,isRunning, tab_init[L][L];
extern  point stack[9999],tab[L][L],nextp,p,n;
extern  SDL_Rect rect[L][L],rect2[L][L];
extern  SDL_Window* window;
extern  SDL_Renderer* renderer;


void connect_cell(point u, point v);
int Initialisation_creation();
SDL_Rect newSDL_Rect(int xs, int ys, int widths, int heights);
point rand_vois(point p);
void Quiter_detruire();
void setup();
void processInput();
point rand_vois_nonvi(point p);
void render();
void Labyrinthe();
int verifier(point p);
void entree_sortie();
void entree(int g);
void sortie1();
void matrice_adj();
void end_start_node();
void enregister_labyrinthe();
void recuperer_labyrinthe();
void dijkstra(int G[N][N], int n, int start, int end);
void render2(int g, int h);
void Labyninthe_cyc();