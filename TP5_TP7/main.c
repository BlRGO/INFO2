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
	int* tab1;
	int* tab2;
  int* tab3;
  int* tab4;
  int* tab5;
	int* tab6;
	printf("TP5 ou TP7 ? (tapez 0 pour le TP5 et tapez 1 pour le TP7)\n");
	scanf("%d", &choix);
	if (choix == 0)
	{
		printf("C'est le TP5 ! \n");
		printf("\n");
	  tab1 = allouer (TAILLE);
	  initialiser (tab1, TAILLE);
	  printf("tableau 1 : \n");
		printf("\n");
	  afficher (tab1, TAILLE);
	  tab2 = allouer (TAILLE);
	  copie (tab1, tab2, TAILLE);
		printf("\n");
	  printf("copie du tableau 1 : \n");
		printf("\n");
	  afficher (tab2, TAILLE);
	  echange (tab1, 0, 1);
		printf("\n");
	  printf("échange de la valeur du tableau 1, 0 -> 1 : \n");
		printf("\n");
	  afficher (tab1, TAILLE);
		printf("\n");
	  printf("test du tri par selection sur un tableau \n");
		printf("\n");
	  printf("tableau avant le tri : \n");
		printf("\n");
	  afficher (tab1, TAILLE);
	  triSelection(tab1, TAILLE);
		printf("\n");
	  printf("tableau après le tri : \n");
		printf("\n");
	  afficher(tab1, TAILLE);
		printf("\n");
	  printf("test du tri à bulles sur un tableau \n");
		printf("\n");
	  tab3 = allouer (TAILLE);
	  initialiser (tab3, TAILLE);
	  printf("tableau avant le tri : \n");
		printf("\n");
	  afficher (tab3, TAILLE);
	  triBulles (tab3, TAILLE);
		printf("\n");
	  printf("tableau après le tri : \n");
		printf("\n");
	  afficher (tab3, TAILLE);
		printf("\n");
	   printf("test du tri par insertion sur un tableau \n");
		 printf("\n");
	  tab4 = allouer (TAILLE);
	  initialiser (tab4, TAILLE);
	  printf("tableau avant le tri : \n");
		printf("\n");
	  afficher (tab4, TAILLE);
	  triInsertion (tab4, TAILLE);
		printf("\n");
	  printf("tableau après le tri : \n");
		printf("\n");
	  afficher (tab4, TAILLE);
	}
	else
	{
		printf("C'est le TP7 ! \n");
		printf("\n");
	  printf("test du tri rapide su un tableau \n");
		printf("\n");
	  tab5 = allouer (TAILLE);
	  initialiser (tab5, TAILLE);
	  printf("tableau avant le tri : \n");
		printf("\n");
	  afficher(tab5, TAILLE);
		t1=clock();
	  triRapide(tab5, 0, TAILLE);
		t2=clock();
		temps_total= (float)(t2-t1)/CLOCKS_PER_SEC;
		printf("\n");
	  printf("tableau après le tri : \n");
		printf("\n");
	  afficher(tab5, TAILLE);
		printf("\n");
		printf("le tri rapide a mis %f de secondes à s'executer \n",temps_total);
		printf("\n");
		printf("test du tri fusion su un tableau \n");
		printf("\n");
	  tab6 = allouer (TAILLE);
	  initialiser (tab6, TAILLE);
	  printf("tableau avant le tri : \n");
		printf("\n");
	  afficher(tab6, TAILLE);
		t3=clock();
		triFusion(tab6, 0, TAILLE);
		t4=clock();
		temps_total2= (float)(t4-t3)/CLOCKS_PER_SEC;
		printf("\n");
	  printf("tableau après le tri : \n");
		printf("\n");
	  afficher(tab6, TAILLE);
		printf("\n");
		printf("le tri fusion a mis %f de secondes à s'executer \n",temps_total2);
	  return 0;
	}
}
