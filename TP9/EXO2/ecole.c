#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ecole.h"

tabEtudiants* lireCSV(char* fichierNotes)
{
    FILE* mesNotes = NULL; char ligne[N];
    int nbLignesLues = 0; int nbColonnesLues = 0; int i = 0;
    char* laLigne;
    tabEtudiants* tabEtu = malloc(sizeof(TabEtudiants)*1);
    etudiant e1 = malloc(sizeof(etudiant)*1);
    etudiant e2 = malloc(sizeof(etudiant)*1);
    etudiant e3 = malloc(sizeof(etudiant)*1);
    etudiant e4 = malloc(sizeof(etudiant)*1);
    etudiant e5 = malloc(sizeof(etudiant)*1);
    tabEtu[0] = e1;
    tabEtu[1] = e2;
    tabEtu[2] = e3;
    tabEtu[3] = e4;
    tabEtu[4] = e5;
    laLigne=malloc(sizeof(char)*N);
    mesNotes = fopen(fichierNotes, "r");
    if (mesNotes == NULL) {
        printf("Erreur ouverture fichier \n");
    }else{
        while(fgets(ligne,N,mesNotes) !=NULL){
            laLigne= strtok(ligne,";");
            while (laLigne != NULL){
                printf("colonne N°%d => %s \n", nbColonnesLues,laLigne);
                if (nbColonnesLues == 0)
                {
                    tabEtu[nbColonnesLues].numEtudiant = laLigne;
                }
                else if (nbColonnesLues == 1)
                {
                    tabEtu[nbColonnesLues].prenom = laLigne;
                }
                else if (nbColonnesLues == 2)
                {
                    tabEtu[nbColonnesLues].nom = laLigne;
                }
                else
                {
                    tabEtu[nbColonnesLues].mesNotes[i] = laLigne;
                    i++;
                }
                laLigne = strtok(NULL, ";");
                nbColonnesLues++;
            }
            printf("\n");
            nbColonnesLues=0;
            nbLignesLues++;
        }
        fclose(mesNotes);
    }
    return 0;
}

void afficherEtudiant(etudiant e)
{
    printf("numéro étudiant : %s \n", e.numEtudiant);
    printf("prénom : %s \n", e.prenom);
    printf("nom : %s \n", e.nom);
    for (int i = 0; i < 5; i++)
    {
        printf("note n°%d : %d \n", i, e.mesNotes[i]);
    }
    printf("#====================# \n");
}