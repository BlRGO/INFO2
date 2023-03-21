#include "fonctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* allouer(int taille){
	int* ptr;
	ptr = malloc (taille * sizeof(int));
	return ptr;
}

void initialiser(int* tab,int taille){
	srand(time(NULL));
	for (int i = 0; i < taille; i++){
		tab[i] = rand()%100;
	}
}

void afficher(int* tab,int taille){
	printf("[");
	for (int i = 0; i < taille; i++){
		if (i < taille - 1){
			printf (" %d ,", tab[i]);
		}
		else {
			printf (" %d ", tab[i]);
		}
	}
	printf("] \n");
}

void copie(int* tabOg, int* tabCp, int taille){
	for (int i = 0; i < taille; i++){
		tabCp[i] = tabOg[i];
	}
}

void echange(int* tab, int i, int j){
	int tmp;
	tmp = tab[i];
	tab[i] = tab[j];
	tab[j] = tmp;
}
