#include "puissance4.h"
#include <stdlib.h>
#include <stdio.h>

/* corps des différentes fonctions/procédures */

int** allouer (int taille){
	int** ptr;
	ptr = malloc (taille * sizeof(int*));
	for (int i = 0; i < taille; i++){
		ptr[i] = malloc (taille * sizeof(int));
	}
	return ptr;
}

void initialiser (int** maGrille, int taille){
	for (int i = 0; i < taille; i++){
		for (int j = 0; j < taille; j++){
			maGrille[i][j] = -1;
		}
	}
}

void afficher (int** maGrille, int taille){
	for (int i = 0; i < taille; i++){
		for (int j = 0; j < taille; j++){
			if (maGrille[i][j] == -1){
				printf ("|   ");
			}
			else if (maGrille[i][j] == 1){
				printf ("| X ");
			}
			else {
				printf ("| O ");
			}
		}
		printf("| \n");
	}
}

int jouer (int** maGrille, int taille, int joueur){
	int res = 0; /* ici on met res à faux ! */
	int colonne;
	int i = taille - 1; /* on initialise i à la taille de la colonne */
	
	printf ("veuillez saisir une colonne ? \n");
	scanf ("%d", &colonne);
	
	/* si la saisie de l'utilisateur est incorrect */
	if (colonne > N - 1 || colonne < 0){
		res = 0; /* on dit que c'est faux, et on ne fait rien !!! */
	}
	else if (maGrille[0][colonne] != -1){
		/* Si il n'y a plus de place dans la colonne */
		res = 0; /* si la colonne est pleine on ne fait rien !!! */
	}
	else {
		/* Placer le pion du joueur */
		while (i < -1 || !res){
			if (maGrille[i][colonne] == -1){
				maGrille[i][colonne] = joueur;
				res = 1;
			}
			else {
				i = i - 1;
			}
		}
	}
	return res;
}

int aGagne (int** maGrille, int taille){
	int joueur = -1;
	int cptTour = 0;
	while (joueur != 1 || joueur != 2 || cptTour == taille*taille){
		joueur = verificationLignes (maGrille,taille);
		joueur = verificationColonnes (maGrille,taille);
		joueur = verificationDiag1 (maGrille,taille);
		joueur = verificationDiag2 (maGrille,taille);
		cptTour = cptTour + 1;
	}
	if (cptTour == taille*taille && (joueur != 1 || joueur != 2) ){
		return cptTour;
	}
	else {
		return joueur;
	}
}

int verificationLignes (int** maGrille,int taille){
	int joueur = -1;
	
	for (int i = 0; i < taille; i++){
		for (int j = 0; j < taille - 3; j++){
			if (maGrille[i][j] != -1 && 
			maGrille[i][j] == maGrille[i][j+1] &&
			maGrille[i][j] == maGrille[i][j+2] &&
			maGrille[i][j] == maGrille[i][j+3] &&
			maGrille[i][j+1] == maGrille[i][j+2] &&
			maGrille[i][j+1] == maGrille[i][j+3] &&
			maGrille[i][j+2] == maGrille[i][j+3]){
				
				joueur = maGrille[i][j];
				
			}
		}
	}
	return joueur;
}

int verificationColonnes (int** maGrille,int taille){
	int joueur = -1;
	
	for (int i = 0; i < taille; i++){
		for (int j = 0; j < taille - 3; j++){
			if (maGrille[i][j] != -1 && 
			maGrille[i][j] == maGrille[i+1][j] &&
			maGrille[i][j] == maGrille[i+2][j] &&
			maGrille[i][j] == maGrille[i+3][j] &&
			maGrille[i+1][j] == maGrille[i+2][j] &&
			maGrille[i+1][j] == maGrille[i+3][j] &&
			maGrille[i+2][j] == maGrille[i+3][j]){
				
				joueur = maGrille[i][j];
				
			}
		}
	}
	return joueur;
}

int verificationDiag1 (int** maGrille,int taille){
	int joueur = -1;
	
	for (int i = 0; i < taille - 3; i++){
		for (int j = 3; j < taille; j++){
			if (maGrille[i][j] != -1 && 
			maGrille[i][j] == maGrille[i+1][j-1] &&
			maGrille[i][j] == maGrille[i+2][j-2] &&
			maGrille[i][j] == maGrille[i+3][j-3] &&
			maGrille[i+1][j-1] == maGrille[i+2][j-2] &&
			maGrille[i+1][j-1] == maGrille[i+3][j-3] &&
			maGrille[i+2][j-2] == maGrille[i+3][j-3]){
				
				joueur = maGrille[i][j];
				
			}
		}
	}
	return joueur;
}

int verificationDiag2 (int** maGrille,int taille){
	int joueur = -1;
	
	for (int i = 0; i < taille - 3; i++){
		for (int j = 0; j < taille - 3; j++){
			if (maGrille[i][j] != -1 && 
			maGrille[i][j] == maGrille[i+1][j+1] &&
			maGrille[i][j] == maGrille[i+2][j+2] &&
			maGrille[i][j] == maGrille[i+3][j+3] &&
			maGrille[i+1][j+1] == maGrille[i+2][j+2] &&
			maGrille[i+1][j+1] == maGrille[i+3][j+3] &&
			maGrille[i+2][j+2] == maGrille[i+3][j+3]){
				
				joueur = maGrille[i][j];
				
			}
		}
	}
	return joueur;
}

void tourDeJeu(int** maGrille,int taille){
	int joueur = 1;
	int cptTour = 0;
	int res = -1;
	int place = 0;
	
	/* tant qu'il n'y a pas de gagnant et que que la grille n'est pas 
	entièrement remplie */
	while (res == -1 && cptTour != taille*taille){
		
		/* tant que le joueur n'a pas placé son pion */
		while (place == 0){
			place = jouer(maGrille, taille, joueur);
			if (place == 0){
				printf ("-----Erreur de saisie----- Veuillez recommencer \n");
			}
			afficher (maGrille, taille);
		}
		
		/* on valide le placement du pion */
		
		place = 0;
		
		/* Compter les tours */
		
		cptTour = cptTour+1;
    
		/* regarder s'il y a un gagnant */
		
		res = aGagne (maGrille,taille);
    
		/* on change de joueur */
		
		if (joueur == 1){
			joueur = 2;
		}
		else {
			joueur = 1;
		}
	}
	
	/* fin de la partie */
	
	if (res != -1){
		printf ("le joueur %d a gagne",res);
	}
	else {
		printf ("Il y a match nul");
	}
}

void libere (int** maGrille,int taille){
	for (int i=0; i<taille; i++){
		free(maGrille[i]);
	}
	free(maGrille);
} 
