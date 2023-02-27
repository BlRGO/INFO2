#include "morpion.h"
#include <stdio.h>
#include <stdlib.h>

/* corps des différentes fonctions/procédures */

int** allouerTableau (){
	int** ptr;
	ptr = malloc (3 * sizeof(int*));
	for (int i = 0; i < 3; i++){
		ptr[i] = malloc (3 * sizeof(int));
	}
	return ptr;
}

void initTableau (int** maGrille){
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			maGrille[i][j] = -1;
		}
	}
}

void afficherGrille (int** maGrille){
	for (int i = 0; i < 3; i++){
		printf("+---+---+---+ \n");
		for (int j = 0; j < 3; j++){
			if (maGrille[i][j] == 1){
				printf ("| X ");
			}
			else if (maGrille[i][j] == 2){
				printf ("| O ");
			}
			else {
				printf ("|   ");
			}
		}
		printf("| \n");
	}
	printf ("+---+---+---+ \n");
}

int joue (int** maGrille, int joueur){
	int res = 0;
	int ligne;
	int colonne;
	
	printf ("Veuillez entrer la ligne et la colonne : \n");
	scanf ("%d", &ligne);
	scanf ("%d", &colonne);
	
	if (colonne > 2 || colonne < 0){
		res = 0;
	}
	else if (ligne > 2 || colonne < 0){
		res = 0;
	}
	else if (maGrille[ligne][colonne] != -1){
		res = 0;
	}
	else {
		maGrille[ligne][colonne] = joueur;
		res = 1;
	}
	return res;
}

void tour2jeu (int** maGrille){
	int joueur = 1;
	int cptTour = 0;
	int res = -1;
	int place = 0;
	
	while (res == -1 && cptTour != 9){
		
		while (place == 0){
			place = joue(maGrille, joueur);
			if (place == 0){
				printf("-----Erreur de saisie----- Veuillez recommencer \n");
			}
			afficherGrille(maGrille);
		}
		place = 0;
		
		cptTour = cptTour + 1;
		
		res = gagne(maGrille);
		
		if (joueur == 1){
			joueur = 2;
		}
		else {
			joueur = 1;
		}
	}
	if (res != -1){
		printf ("le joueur %d a gagne \n",res);
	}
	else {
		printf ("Il y a match nul \n");
	}
}

int testerLigne (int** maGrille){
	int joueur = -1;
	int j = 0;
	
	for (int i = 0; i < 3; i++){
		if (maGrille[i][j] != -1 && 
		maGrille[i][j] == maGrille[i][j+1] &&
		maGrille[i][j] == maGrille[i][j+2] &&
		maGrille[i][j+1] == maGrille[i][j+2]){
				
			joueur = maGrille[i][j];
		
		}
	}
	return joueur;
}

int testerColonne (int** maGrille){
	int joueur = -1;
	int i = 0;

	for (int j = 0; j < 3; j++){
		if (maGrille[i][j] != -1 && 
		maGrille[i][j] == maGrille[i+1][j] &&
		maGrille[i][j] == maGrille[i+2][j] &&
		maGrille[i+1][j] == maGrille[i+2][j]){
				
			joueur = maGrille[i][j];
		
		}
	}
	return joueur;
}

int testerDiag1 (int** maGrille){
	int joueur = -1;
	int i = 0;
	int j = 3;
	
	if (maGrille[i][j] != -1 && 
	maGrille[i][j] == maGrille[i+1][j-1] &&
	maGrille[i][j] == maGrille[i+2][j-2] &&
	maGrille[i+1][j-1] == maGrille[i+2][j-2]){
				
		joueur = maGrille[i][j];
		
	}
	return joueur;
}

int testerDiag2 (int** maGrille){
	int joueur = -1;
	int i = 0;
	int j = 0;
	
	if (maGrille[i][j] != -1 &&
	maGrille[i][j] == maGrille[i+1][j+1] &&
	maGrille[i][j] == maGrille[i+2][j+2] &&
	maGrille[i+1][j+1] == maGrille[i+2][j+2]){
		
		joueur = maGrille[i][j];
		
	}
	return joueur;
}

int gagne (int** maGrille){
	int res = -1;
	
	if (testerLigne(maGrille) != -1){
		res = testerLigne(maGrille);
	}
	else if (testerColonne(maGrille) != -1){
		res = testerColonne(maGrille);
	}
	else if (testerDiag1(maGrille) != -1){
		res = testerDiag1(maGrille);
	}
	else if (testerDiag2(maGrille) != -1){
		res = testerDiag2(maGrille);
	}
	
	return res;
}
