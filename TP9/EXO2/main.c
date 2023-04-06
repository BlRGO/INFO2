#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ecole.h"

// int main()
// {
//     char* fichierNotes = malloc(sizeof(char)*100);
//     fichierNotes = "notes.csv";
//     printf("c'est le TP d'info ! \n");
//     lireCSV(fichierNotes);
//     return 0;
// }

int main()
{
    FILE* mesNotes = NULL; char ligne[N];
    int nbLignesLues = 0; int nbColonnesLues = 0;
    char* laLigne;
    laLigne=malloc(sizeof(char)*N);
    mesNotes = fopen("notes.csv", "r");
    if (mesNotes == NULL) {
        printf("Erreur ouverture fichier \n");
    }else{
        while(fgets(ligne,N,mesNotes) !=NULL){
            laLigne= strtok(ligne,";");
            while (laLigne != NULL){
                printf("colonne N°%d => %s \n", nbColonnesLues,laLigne);
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