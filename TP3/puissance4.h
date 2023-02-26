#ifndef __puissance4_H_
#define __puissance4_H_
#define N 7
/* toutes mes signatures/prototypes de fonctions/procédures */


/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  alloue la mémoire nécessaire pour la matrice */
/* Entrée(s) :  taille de la grille */
/* Sortie(s) :  grille de la taille entrée */
int** allouer(int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  initialise la matrice avec des -1 */
/* Entrée(s) :  ma grille et sa taille */
/* Sortie(s) :  pas de sortie c'est une procédure */
void initialiser(int** maGrille,int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  affiche ma grille dans la console */
/* Entrée(s) :  ma grille et sa taille */
/* Sortie(s) :  pas de sortie c'est une procédure */
void afficher(int** maGrille,int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  permet de placer un pion dans la grille*/
/* Entrée(s) :  ma grille, sa taille et le joueur qui doit poser son pion*/
/* Sortie(s) :  un booléen pour savoir si le pion a été joué*/
int jouer(int** maGrille,int taille, int joueur);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  vérifie si la partie a été gagné */
/* Entrée(s) :  ma grille et sa taille */
/* Sortie(s) :  un booléen vérifiant si un joueur a gagné ou si il y a match nul */
int aGagne(int** maGrille,int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  vérifie si les lignes ne possèdent pas 4 pion d'affilés */
/* Entrée(s) :  ma grille et sa taille */
/* Sortie(s) :  un booléen */
int verificationLignes(int** maGrille,int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  vérifie si les colonnes ne possèdent pas 4 pion d'affilés */
/* Entrée(s) :  ma grille et sa taille */
/* Sortie(s) :  un booléen */
int verificationColonnes(int** maGrille,int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  vérifie si la diagonale ne possèdent pas 4 pion d'affilés*/
/* Entrée(s) :  ma grille et sa taille */
/* Sortie(s) :  un booléen */
int verificationDiag1(int** maGrille,int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  vérifie si la diagonale ne possèdent pas 4 pion d'affilés */
/* Entrée(s) :  ma grille et sa taille */
/* Sortie(s) :  un booléen */
int verificationDiag2(int** maGrille,int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  permet de jouer au puissance 4*/
/* Entrée(s) :  ma grille et sa taille*/
/* Sortie(s) :  rien*/
void tourDeJeu(int** maGrille,int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  a la fin de la partie, permet de liberer l'espace mémoire 
   occupé par la matrice*/
/* Entrée(s) :  ma grille et sa taille*/
/* Sortie(s) :  rien*/
void libere (int** maGrille,int taille);
#endif
