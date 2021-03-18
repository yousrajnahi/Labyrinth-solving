#include"fonctions.h"
int a2, b2;
void dijkstra(int G[N][N], int n, int start, int end)// algorithme classque qui retrouve le plus court chemin
{
    int cost[N][N], dist[N], visited[N], pred[N];
    int i, j, count, mindist, nextnode;
    int w = 0, P[999];
    int g, h;
    P[w] = end;
    render2(a2, b2);
    SDL_Delay(1000);
    for (i = 0; i < n; i++)// matrice des couts
    {
        for (j = 0; j < n; j++)
        {
            if (G[i][j] == 0)
            {
                cost[i][j] = INF;
            }
            else
            {
                cost[i][j] = G[i][j];
            }

        }
    }
    for (i = 0; i < n; i++)
    {
        dist[i] = cost[start][i];
        pred[i] = start;
        visited[i] = 0;

    }
    dist[start] = 0;
    visited[start] = 1;
    count = 1;
    while (count < n - 1)
    {
        mindist = INF;
        for (i = 0; i < n; i++)
        {
            if (dist[i] < mindist && !visited[i])
            {
                mindist = dist[i];
                nextnode = i;
            }
        }
        visited[nextnode] = 1;
        for (i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                if ((mindist + cost[nextnode][i]) < dist[i])
                {
                    dist[i] = mindist + cost[nextnode][i];
                    pred[i] = nextnode;

                }

            }
        }
        count++;

    }

    for (i = 0; i < n; i++)
    {
        if (i != start)
        {
            if (end == i)
            {

                j = i;
                do
                {
                    w++;
                    j = pred[j];
                    P[w] = j;


                } while (j != start);

            }


        }

    }

    for (i = w; i > -1; i--) {

        g = P[i] / (L2)+1;
        h = P[i] % (L2)+1;

        tab[g][h].val = 7;
        render();
        render2(g, h);
        SDL_Delay(100);
    }

    render();
    if (end == endnode1)
    {

        render2(a3, b3);
        SDL_Delay(1000);


    }
    else if (end == endnode2)
    {
        render2(a4, b4);
        SDL_Delay(1000);
    }

}