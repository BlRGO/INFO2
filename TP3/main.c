#include <stdio.h>
#include "puissance4.h"

int main (){
    printf ("C'est le puissance 4 ! \n");
    int** tab;
    tab = allouer (N);
    initialiser (tab, N);
    afficher (tab, N);
    tourDeJeu(tab,N);
    return 0;
}
