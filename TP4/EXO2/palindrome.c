#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100

/* Auteur : Yannis Chatir */
/* Date :  02/03/23 */
/* Résumé :  vérifie si un mot ou une phrase est un palindrome */
/* Entrée(s) :  un mot ou une phrase */
/* Sortie(s) :  un booléen */
int estPalindrome(char monMot[MAX],int deb,int fin);

int main(){
	char chaine[MAX];
	int taille;
    printf("Entrez le mot : \n");
    fgets(chaine,sizeof(char)*MAX,stdin);
    taille=strlen(chaine)-1;
    printf("La taille de monMot est %d \n",taille);
    if (estPalindrome(chaine, 0, taille - 1) == 0){
		printf("Le mot n'est pas un palindrome \n");
	}
	else {
		printf("Le mot est un palindrome \n");
	}
	emptyBuffer();
    return 0;
}

int estPalindrome(char chaine[MAX],int deb,int fin){
	if (chaine[deb] == '\0'){
		deb = deb + 1;
	}
	else if (chaine[fin] == '\0'){
		fin = fin - 1;
	}
	else if (chaine[deb] != chaine[fin]){
		return 0;
	}
	else if (deb >= fin){
		return 1;
	}
	else {
		return estPalindrome(chaine, deb + 1, fin - 1);
	}
}

/* Auteur : Peio L. */
/* Date :  19/11/2022 */
/* Résumé : procédure qui vide le buffer après une saisie */
/* Entrée(s) :  none */
/* Sortie(s) :  none */
void emptyBuffer(){
  char c;
  while (((c = getchar()) != '\n') && (c != EOF));
}
