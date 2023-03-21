#include <stdio.h>
#include <time.h>
#include "fonctions.h"
#include "trisLents.h"
#define TAILLE 10

int main(){
	srand(time(NULL));
	int* tab1;
	int* tab2;
    int* tab3;
    int* tab4;
    tab1 = allouer (TAILLE);
    initialiser (tab1, TAILLE);
    printf("tableau 1 : \n");
    afficher (tab1, TAILLE);
    tab2 = allouer (TAILLE);
    copie (tab1, tab2, TAILLE);
    printf("copie du tableau 1 : \n");
    afficher (tab2, TAILLE);
    echange (tab1, 0, 1);
    printf("échange de la valeur du tableau 1, 0 -> 1 : \n");
    afficher (tab1, TAILLE);
    printf("test du tri par selection sur tab1 : \n");
    triSelection(tab1, TAILLE);
    afficher (tab1, TAILLE);
    printf("test du tri à bulles sur un autre tableau : \n");
    tab3 = allouer (TAILLE);
    initialiser (tab3, TAILLE);
    printf("tableau avant le tri : \n");
    afficher (tab3, TAILLE);
    triBulles (tab3, TAILLE);
    printf("tableau après le tri : \n");
    afficher (tab3, TAILLE);
     printf("test du tri par insertion sur un autre tableau : \n");
    tab4 = allouer (TAILLE);
    initialiser (tab4, TAILLE);
    printf("tableau avant le tri : \n");
    afficher (tab4, TAILLE);
    triInsertion (tab4, TAILLE);
    printf("tableau après le tri : \n");
    afficher (tab4, TAILLE);
    return 0;
}
