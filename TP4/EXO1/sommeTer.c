#include <stdlib.h>
#include <stdio.h>

/* Auteur : .Yannis Chatir */
/* Date :  02/03/23 */
/* Résumé :  fonction qui fais la somme de chaque chiffre présent dans 
 * un nombre */
/* Entrée(s) :  un nombre */
/* Sortie(s) :  la somme de tous ses chiffres */
int sommeTer (int nb,int acc);

int main(){
	int nb = 0;
    printf("veuiller entrer un nb \n");
    scanf("%d", &nb);
    printf("sommeTer : %d \n", sommeTer(nb, 0));
    return 0;
}

int sommeTer (int nb, int acc){
	if (nb == 0){
		return acc ;
	}
	else {
		return sommeTer(nb/10, acc + nb%10);
	}
}
