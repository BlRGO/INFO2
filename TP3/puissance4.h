#ifndef __puissance4_H_
#define __puissance4_H_
#define N 7
/* toutes mes signatures/prototypes de fonctions/procédures */


/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  ... */
/* Entrée(s) :  taille de la grille */
/* Sortie(s) :  grille de la taille entrée */
int** allouer(int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  ... */
/* Entrée(s) :  ... */
/* Sortie(s) :  ... */
void initialiser(int** maGrille,int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  ... */
/* Entrée(s) :  ... */
/* Sortie(s) :  ... */
void afficher(int** maGrille,int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  ...*/
/* Entrée(s) :  ...*/
/* Sortie(s) :  ...*/
int jouer(int** maGrille,int taille, int joueur);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  ... */
/* Entrée(s) :  ... */
/* Sortie(s) :  ... */
int aGagne(int** maGrille,int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  ... */
/* Entrée(s) :  ... */
/* Sortie(s) :  ... */
int verificationLignes(int** maGrille,int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  ... */
/* Entrée(s) :  ... */
/* Sortie(s) :  ... */
int verificationColonnes(int** maGrille,int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  ... */
/* Entrée(s) :  ... */
/* Sortie(s) :  ... */
int verificationDiag1(int** maGrille,int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  ... */
/* Entrée(s) :  ... */
/* Sortie(s) :  ... */
int verificationDiag2(int** maGrille,int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  ...*/
/* Entrée(s) :  ...*/
/* Sortie(s) :  ...*/
void tourDeJeu(int** maGrille,int taille);

/* Auteur : Yannis CHATIR */
/* Date :  21/02/2023 */
/* Résumé :  ...*/
/* Entrée(s) :  ...*/
/* Sortie(s) :  ...*/
void libere (int** maGrille,int taille);
#endif
