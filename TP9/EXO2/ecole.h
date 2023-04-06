#ifndef __ecole_H_
#define __ecole_H_
#define N 1000

struct etudiant
{
    int numEtudiant;
    char* nom;
    char* prenom;
    int mesNotes[5];
};

typedef struct etudiant etudiant;

struct tabEtudiants
{
    etudiant* tabEtudiants;
    int taille;
};

typedef struct tabEtudiants tabEtudiants;

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

tabEtudiants* lireCSV(char* fichierNotes);

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void afficherEtudiant(etudiant e);

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void afficherTableauEtudiant(tabEtudiants tabEtudiants);

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

double calculerMoyenneParEtudiant(etudiant e);

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

etudiant meilleurEtudiant(tabEtudiants tabEtudiants);

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void saisirEtudiant(etudiant* a);

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void ajouterEtudiant(tabEtudiants* tabEtudiants,etudiant* a);

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void ecrireCSV(tabEtudiants* tabEtudiants,char* fichierNotes);

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void supprimerEtudiant(tabEtudiants* tabEtudiants, int num);

#endif