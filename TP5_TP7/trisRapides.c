#include "fonctions.h"
#include "trisRapides.h"
#include <stdio.h>
#include <stdlib.h>

int partitionner(int* tab, int pas, int taille)
{
  int pivot;
  int i;
  int j;
  pivot = tab[pas];
  i = pas - 1;
  j = taille + 1;
  while (i < j)
  {
    do
    {
      j = j - 1;
    } while (tab[j] > pivot);
    do
    {
      i = i + 1;
    } while (tab[i] < pivot);
    if (i < j)
    {
      echange(tab, i, j);
    }
  }
  return j;
}

void triRapide(int* tab, int pas, int taille)
{
  int q;
  if (pas < taille)
  {
    q = partitionner (tab, pas, taille);
    triRapide (tab, pas, q);
    triRapide (tab, q + 1, taille);
  }
}

void triFusion(int* tab, int deb, int fin)
{
  int mil;
  if (deb < fin)
  {
    mil = (deb + fin) / 2;
    triFusion(tab, deb, mil);
    triFusion(tab, mil+1, fin);
    fusionner(tab, deb, mil, fin);
  }
}

void fusionner(int* tab, int deb, int mil, int fin)
{
   int i = 0;
   int max = fin - deb;
   int gauche = deb;
   int droite = mil + 1;
   int* tabTemp = allouer(TAILLE);

   while (gauche <= mil && droite <= fin)
   {
     if (tab[gauche] < tab[droite])
     {
       tabTemp[i] = tab[gauche];
       gauche = gauche + 1;
     }
     else
     {
       tabTemp[i] = tab[droite];
       droite = droite + 1;
     }
     i = i + 1;
   }
   while (gauche <= mil)
   {
     tabTemp[i] = tab[gauche];
     gauche = gauche + 1;
     i = i + 1;
   }
   while (droite <= fin)
   {
     tabTemp[i] = tab[droite];
     droite = droite + 1;
     i = i + 1;
   }
   for (int j = 0; j < max+1; j++)
   {
     tab[j + deb] = tabTemp[j];
   }
}
