#ifndef __soccer_H_
#define __soccer_H_
#define TAILLEMAX 50

struct joueur
{
    char* nom;
    char* prenom;
    char* poste;
    int numero;
    int age;
    int nbButs;
};

typedef struct joueur joueur;

struct equipe
{
    char* nom;
    char* pays;
    char* champ;
    int classement;
    int nbJoueurs;
    joueur* mesJoueurs;
};

typedef struct equipe equipe;

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void creationJoueur(joueur* j);

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void afficherJoueur(joueur j);

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void creationEquipe(equipe* e);

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void ajouterJoueur(equipe* e,joueur j);

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void afficherEquipe(equipe e);

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

joueur meilleurButeur(equipe e);

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

int compareEquipe(equipe e1,equipe e2);

#endif