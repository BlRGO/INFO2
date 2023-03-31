#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char maChaine1[10];
    char maChaine2[10];
    printf("Entrer une chaîne de caractère : \n");
    scanf("%s",maChaine1);
    printf("L'utilisateur a rentré la chaine suivante : %s \n",maChaine1);
    strcpy(maChaine2, maChaine1);
    printf("la copie de la chaine 1 vers la chaine 2 s'affiche : %s \n", maChaine2);
    return 0;
}