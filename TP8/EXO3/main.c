#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "soccer.h"

int main(){
    joueur* j1;
    joueur* j2;
    joueur* j3;
    joueur* j4;
    joueur* j5;
    joueur* j6;
    equipe* e1;
    equipe* e2;
    joueur tmp;
    int res;

    j1 = malloc(sizeof(joueur)*1);
    j2 = malloc(sizeof(joueur)*1);
    j3 = malloc(sizeof(joueur)*1);
    j4 = malloc(sizeof(joueur)*1);
    j5 = malloc(sizeof(joueur)*1);
    j6 = malloc(sizeof(joueur)*1);
    e1 = malloc(sizeof(equipe)*1);
    e2 = malloc(sizeof(equipe)*1);

    creationJoueur(j1);

    creationJoueur(j2);

    creationJoueur(j3);

    creationJoueur(j4);

    creationEquipe(e1);

    ajouterJoueur(e1, *j1);

    ajouterJoueur(e1, *j2);

    ajouterJoueur(e1, *j3);

    ajouterJoueur(e1, *j4);

    afficherEquipe(*e1);

    creationJoueur(j5);

    creationJoueur(j6);

    creationEquipe(e2);

    ajouterJoueur(e2, *j5);

    ajouterJoueur(e2, *j6);

    afficherEquipe(*e2);

    tmp = meilleurButeur(*e1);

    printf("Le meilleur buteur de l'équipe %s est %s %s \n", e1->nom, tmp.nom, tmp.prenom);

    printf("\n");

    tmp = meilleurButeur(*e2);

    printf("Le meilleur buteur de l'équipe %s est %s %s \n", e2->nom, tmp.nom, tmp.prenom);

    printf("\n");

    res = compareEquipe(*e1, *e2);

    switch(res)
    {
        case 1:
            printf("L'équipe %s est mieux classé \n", e1->nom);
            printf("\n");
            break;
        case 2:
            printf("L'équipe %s est mieux classé \n", e2->nom);
            printf("\n");
            break;
        case 0:
            printf("L'équipe %s a le même classement que %s \n", e1->nom, e2->nom);
            printf("\n");
            break;
        default:
            printf("ERROR");
            printf("\n");
            break;
    }

    return 0;

}