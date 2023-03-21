#include "fonctions.h"
#include "trisLents.h"
#include <stdio.h>
#include <stdlib.h>

void triSelection(int* tab, int taille){
	int min;
	for (int i = 0; i < taille - 1; i++){
		min = i;
		for (int j = i + 1; j < taille; j++){
			if (tab[j] < tab[min]){
				min = j;
			}
		}
		echange(tab, i, min);
	}
}

void triBulles(int* tab, int taille){
	int enDesordre = 1;
	while (enDesordre == 1){
		enDesordre = 0;
		for (int i = 0; i < taille; i++){
			if (tab[i] > tab[i+1]){
				echange(tab, i, i+1);
				enDesordre = 1;
			}
		}
	}
}

void triInsertion(int* tab, int taille){
	int eltEnCours;
	int j;
	for (int i = 1; i <= taille; i++)
	{
		eltEnCours = tab[i];
		j = i;
		while (j > 0 && tab[j-1] > eltEnCours)
		{
			tab[j] = tab[j-1];
			j = j - 1;
		}
		tab[j] = eltEnCours;
	}
}
