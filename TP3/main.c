#include <stdio.h>
#include "puissance4.h"

int main (){
    int** tab;
    tab = allouer (N);
    initialiser (tab, N);
    afficher (tab, N);
    tourDeJeu(tab,N);
    libere(tab, N);
    return 0;
}
