#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 1000

int main()
{
    // char* type;  int taille;  char* prix;
    //type = malloc(sizeof(char)*N); prix = malloc(sizeof(char)*N);
    FILE* fichier1 = NULL; FILE* fichier2 = NULL; char ligne[N]; int nbLignesLues = 0; int nbColonnesLues = 0; char* laLigne;
    laLigne = malloc(sizeof(char)*N);
    fichier1 = fopen("mesFringues.csv", "r");
    fichier2 = fopen("mesFringues.json", "w");
    if (fichier1 == NULL)
    {
        printf("Erreur ouverture fichier \n");
    }
    else
    {
        fprintf(fichier2, "[ \n");
        while(fgets(ligne, N, fichier1) != NULL)
        {
            laLigne = strtok(ligne, ";");
            while(laLigne != NULL)
            {
                printf("colonne N°%d => %s \n", nbColonnesLues,laLigne);
                if (nbColonnesLues == 0)
                {
                    fprintf(fichier2, "    { \n");
                    fprintf(fichier2, "    \"id\" : \"%s\",",laLigne);
                    fprintf(fichier2, "    \n");
                }
                else if (nbColonnesLues == 1)
                {
                    fprintf(fichier2, "    \"type\" : \"%s\",",laLigne);
                    fprintf(fichier2, "    \n");
                }
                else if (nbColonnesLues == 2)
                {
                    fprintf(fichier2, "    \"taille\" : \"%s\",",laLigne);
                    fprintf(fichier2, "    \n");
                }
                else if (nbColonnesLues == 3)
                {
                    fprintf(fichier2, "    \"prix\" : \"%s\" ",laLigne);
                    fprintf(fichier2, "    \n");
                    fprintf(fichier2, "    }, \n");
                }
                else
                {
                    fprintf(fichier2, "    \n");
                }
                laLigne = strtok(NULL, ";");
                nbColonnesLues++;
            }
            printf("\n");
            nbColonnesLues = 0;
            nbLignesLues++;
        }
        fprintf(fichier2, "    ] \n");
        fclose(fichier1);
        fclose(fichier2);
    }  
  return 0;
}