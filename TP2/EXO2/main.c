#include <stdio.h>
#include "morpion.h"

int main (){
    int** tab;
    tab = allouerTableau (3);
    initTableau (tab);
    afficherGrille(tab);
	tour2jeu(tab);
    return 0;
}
