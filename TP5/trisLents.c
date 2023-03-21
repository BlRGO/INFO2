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
