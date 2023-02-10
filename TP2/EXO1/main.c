#include <stdio.h>
#include <stdlib.h>

int** allouerTableau (int nbL){
	int** ptr;
	ptr = malloc (nbL * sizeof(int*));
	for (int i = 0; i < nbL; i++){
		ptr[i] = malloc (nbL * sizeof(int));
	}
	return ptr;
}

void afficherTableau (int** tableau, int nbL){
	for (int i = 0; i < nbL; i++){
		for (int j = 0; j < nbL; j++){
			printf ("|%d ",tableau[i][j]);
		}
		printf("| \n");
	}
}

void initTableau (int** tableau, int nbL){
	int a = 0;
	for (int i = 0; i < nbL; i++){
		for (int j = 0; j < nbL; j++){
			printf ("l = %d et c = %d | saisir la valeur : \n", i, j);
			scanf ("%d", &a);
			tableau[i][j] = a;
			afficherTableau(tableau, nbL);
			a = 0;
		}
	}
}

int cptLigne (int** carre, int ligne){
	int a = 0;
	for (int i = 0; i < 3; i++){
		a += carre [ligne][i];
	}
	return a;
}

int cptColonne (int** carre, int colonne){
	int a = 0;
	for (int i = 0; i < 3; i++){
		a += carre [i][colonne];
	}
	return a;
}

int cptDiag1 (int** carre){
	int a = 0;
	for (int i = 0; i < 3; i++){
		a += carre [i][i];
	}
	return a;
}

int cptDiag2 (int** carre){
	int a = 0;
	for (int i = 2; i > -1; i--){
		a += carre [i][i];
	}
	return a;
}

int estMagique (int** carre){
	int bool = 0;
	for (int i = 0; i < 3; i++){
		for (int j = 0; i < 3; i++){
			if (cptLigne(carre, i) != cptColonne(carre, j)){
				bool = 1;
			}
			if (cptLigne(carre, i) != cptDiag1(carre)){
				bool = 1;
			}
			if (cptLigne(carre, i) != cptDiag2(carre)){
				bool = 1;
			}
		}
	}
	return bool;
}

int main (){
    int** carre;
    carre = allouerTableau (3);
    initTableau (carre, 3);
	if (estMagique(carre) == 0){	
		printf ("Le carré est magique \n");
	}
	else {
		printf("Le carré n'est pas magique \n");
	}
    return 0;
}
