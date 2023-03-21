#include <stdio.h>
#include <time.h>
#include "fonctions.h"
#include "trisLents.h"
#define TAILLE 10

int main(){
	srand(time(NULL));
	int* tab1;
	int* tab2;
    printf("C'est le TD5 ! \n");
    tab1 = allouer (TAILLE);
    initialiser (tab1, TAILLE);
    printf("tab1 : \n");
    afficher (tab1, TAILLE);
    tab2 = allouer (TAILLE);
    copie (tab1, tab2, TAILLE);
    printf("copie de tab1 : \n");
    afficher (tab2, TAILLE);
    echange (tab1, 0, 1);
    printf("échange de la valeur de tab1, 0 -> 1 : \n");
    afficher (tab1, TAILLE);
    printf("test du tri par selection sur tab1 : \n");
    triSelection(tab1, TAILLE);
    afficher (tab1, TAILLE);
    return 0;
}
