#ifndef __morpion_H_
#define __morpion_H_

/* toutes mes signatures/prototypes de fonctions/procédures */

int** allouerTableau ();

void initTableau (int** maGrille);

void afficherGrille (int** maGrille);

int joue (int** maGrille, int joueur);

void tour2jeu (int** maGrille);

int testerLigne (int** maGrille);

int testerColonne (int** maGrille);

int testerDiag1 (int** maGrille);

int testerDiag2 (int** maGrille);

int gagne (int** maGrille);
#endif
