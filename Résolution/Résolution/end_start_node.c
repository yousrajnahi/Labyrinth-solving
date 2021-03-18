#include"fonctions.h"

int L1,L2,L3,a2, b2, a3, b3, a4, b4,startnode, endnode1, endnode2;;
point tab[L][L];
void end_start_node()//choix du nous de depart et d'arrivé afin de lappliquer sur dijikstra 
{
    for (j = 1; j < L1; j++) {
        if (tab[0][j].val == 2) {
            startnode = j - 1;
            a2 = 0;
            b2 = j;
        }
        if (tab[0][j].val == 3) {
            endnode1 = j - 1;
            a3 = 0;
            b3 = j;
        }
        if (tab[0][j].val == 4) {
            endnode2 = j - 1;
            a4 = 0;
            b4 = j;
        }
        if (tab[L1][j].val == 2) {
            startnode = (L2) * (L3)+j - 1;
            a2 = L1;
            b2 = j;
        }
        if (tab[L1][j].val == 3) {
            endnode1 = (L2) * (L3)+j - 1;
            a3 = L1;
            b3 = j;
        }
        if (tab[L1][j].val == 4) {
            endnode2 = (L2) * (L3)+j - 1;
            a4 = L1;
            b4 = j;
        }
    }
    for (i = 1; i < L1; i++) {
        if (tab[i][0].val == 2) {
            startnode = (L2) * (i - 1);
            a2 = i;
            b2 = 0;
        }
        if (tab[i][0].val == 3) {
            endnode1 = (L2) * (i - 1);
            a3 = i;
            b3 = 0;
        }
        if (tab[i][0].val == 4) {
            endnode2 = (L2) * (i - 1);
            a4 = i;
            b4 = 0;
        }
        if (tab[i][L1].val == 2) {
            startnode = (L2)*i - 1;
            a2 = i;
            b2 = L1;
        }
        if (tab[i][L1].val == 3) {
            endnode1 = (L2)*i - 1;
            a3 = i;
            b3 = L1;
        }
        if (tab[i][L1].val == 4) {
            endnode2 = (L2)*i - 1;
            a4 = i;
            b4 = L1;
        }
    }
}