#include <time.h>
#include <stdio.h>
#include "fonctions.h"
#include "trisLents.h"
#include "trisRapides.h"

int main()
{
    int choix;
    float temps_total;
    int t1;
    int t2;
    float temps_total2;
    int t3;
    int t4;
    int *tab1;
    int *tab3;
    int *tab4;
    int *tab5;
    int *tab6;
    printf("choisissez votre tri : \n");
    printf("\n");
    printf("tri par selection    : tapez 1 \n");
    printf("\n");
    printf("tri a bulles         : tapez 2 \n");
    printf("\n");
    printf("tri par insertion    : tapez 3 \n");
    printf("\n");
    printf("tri rapide           : tapez 4 \n");
    printf("\n");
    printf("tri fusion           : tapez 5 \n");
    printf("\n");
    scanf("%d", &choix);
    printf("\n");
    switch (choix)
    {
    case 1:
        printf("test du tri par selection sur un tableau non trié \n");
        printf("\n");
        tab1 = allouer(TAILLE);
        initialiser(tab1, TAILLE);
        printf("tableau avant le tri : \n");
        printf("\n");
        afficher(tab1, TAILLE);
        triSelection(tab1, TAILLE);
        printf("\n");
        printf("tableau après le tri : \n");
        printf("\n");
        afficher(tab1, TAILLE);
        printf("\n");
        break;

    case 2:
        printf("test du tri à bulles sur un tableau non trié \n");
        printf("\n");
        tab3 = allouer(TAILLE);
        initialiser(tab3, TAILLE);
        printf("tableau avant le tri : \n");
        printf("\n");
        afficher(tab3, TAILLE);
        triBulles(tab3, TAILLE);
        printf("\n");
        printf("tableau après le tri : \n");
        printf("\n");
        afficher(tab3, TAILLE);
        printf("\n");
        break;

    case 3:
        printf("test du tri par insertion sur un tableau non trié \n");
        printf("\n");
        tab4 = allouer(TAILLE);
        initialiser(tab4, TAILLE);
        printf("tableau avant le tri : \n");
        printf("\n");
        afficher(tab4, TAILLE);
        triInsertion(tab4, TAILLE);
        printf("\n");
        printf("tableau après le tri : \n");
        printf("\n");
        afficher(tab4, TAILLE);
        break;

    case 4:
        printf("test du tri rapide sur un tableau non trié \n");
        printf("\n");
        tab5 = allouer(TAILLE);
        initialiser(tab5, TAILLE);
        printf("tableau avant le tri : \n");
        printf("\n");
        afficher(tab5, TAILLE);
        t1 = clock();
        triRapide(tab5, 0, TAILLE);
        t2 = clock();
        temps_total = (float)(t2 - t1) / CLOCKS_PER_SEC;
        printf("\n");
        printf("tableau après le tri : \n");
        printf("\n");
        afficher(tab5, TAILLE);
        printf("\n");
        printf("le tri rapide a mis %f de secondes à s'executer \n", temps_total);
        printf("\n");
        break;

    case 5:
        printf("test du tri fusion su un tableau non trié \n");
        printf("\n");
        tab6 = allouer(TAILLE);
        initialiser(tab6, TAILLE);
        printf("tableau avant le tri : \n");
        printf("\n");
        afficher(tab6, TAILLE);
        t3 = clock();
        triFusion(tab6, 0, TAILLE);
        t4 = clock();
        temps_total2 = (float)(t4 - t3) / CLOCKS_PER_SEC;
        printf("\n");
        printf("tableau après le tri : \n");
        printf("\n");
        afficher(tab6, TAILLE);
        printf("\n");
        printf("le tri fusion a mis %f de secondes à s'executer \n", temps_total2);
        break;

    default:
        break;
    }
    return 0;
}