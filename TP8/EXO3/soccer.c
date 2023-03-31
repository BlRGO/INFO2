#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "soccer.h"

void creationJoueur(joueur* j)
{
    j->nom = malloc(sizeof(char)*TAILLEMAX);
    scanf("%s", j->nom);

    j->prenom = malloc(sizeof(char)*TAILLEMAX);
    scanf("%s", j->prenom);

    j->poste = malloc(sizeof(char)*TAILLEMAX);
    scanf("%s", j->poste);

    scanf("%d", &j->numero);

    scanf("%d", &j->age);

    scanf("%d", &j->nbButs);
}

void afficherJoueur(joueur j)
{
    printf("nom : %s \n", j.nom);
    printf("prénom : %s \n", j.prenom);
    printf("poste : %s \n", j.poste);
    printf("noméro : %d \n", j.numero);
    printf("age : %d \n", j.age);
    printf("nombre de buts : %d \n", j.nbButs);
    printf("\n");
    printf("#====================# \n");
}

void creationEquipe(equipe* e)
{
    e->nom = malloc(sizeof(char)*TAILLEMAX);
    scanf("%s", e->nom);

    e->pays = malloc(sizeof(char)*TAILLEMAX);
    scanf("%s", e->pays);

    e->champ = malloc(sizeof(char)*TAILLEMAX);
    scanf("%s", e->champ);

    scanf("%d", &e->classement);

    e->nbJoueurs = 0;
}

void ajouterJoueur(equipe* e,joueur j)
{
    int indexJ;
    indexJ = e->nbJoueurs;
    if(indexJ == 0)
    {
        e->mesJoueurs = malloc(sizeof(joueur)*1);
        e->mesJoueurs[0] = j;
        e->nbJoueurs = 1;
    }
    else
    {
        e->mesJoueurs = realloc(e->mesJoueurs, sizeof(joueur) * (indexJ+1));
        e->mesJoueurs[indexJ] = j;
        e->nbJoueurs = indexJ + 1;

    }
}

void afficherEquipe(equipe e)
{
    printf("nom : %s \n", e.nom);
    printf("pays : %s \n", e.pays);
    printf("championnat : %s \n", e.champ);
    printf("classement : %d \n", e.classement);
    printf("nombre de joueurs : %d \n", e.nbJoueurs);
    printf("\n");
    printf("#====================# \n");
    for(int i = 0; i < e.nbJoueurs; i++)
    {
        afficherJoueur(e.mesJoueurs[i]);
        printf("\n");
    }

}

joueur meilleurButeur(equipe e)
{
    joueur meilleur = e.mesJoueurs[0];
    for(int i = 0; i < e.nbJoueurs; i++)
    {
        if(meilleur.nbButs < e.mesJoueurs[i].nbButs)
        {
            meilleur = e.mesJoueurs[i];
        }
    }
    return meilleur;
}

int compareEquipe(equipe e1,equipe e2)
{
    int res;
    if(e1.classement < e2.classement)
    {
        res = 1;
    }
    else if(e1.classement > e2.classement)
    {
        res = 2;
    }
    else if(e1.classement == e2.classement)
    {
        res = 0;
    }
    else
    {
        res = -1;
    }
    return res;
}