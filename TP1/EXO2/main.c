#include <stdio.h>
#include <stdlib.h>

int verifierStock (int stock){
	if (stock > 0){
		return stock;
	}
	else {
		return -1;
	}
}

void ravitaillerAliment (int* aliment){
	*aliment = *aliment + 1;
}

int main (){
	int trancheEmmental, steak, steakVegan, trancheTomate, feuilleSalade, cornichon;
	printf("Veuillez saisir le stock de tranche d'emmental \n");
	scanf("%d", &trancheEmmental);
	printf("Veuillez saisir le stock de steak \n");
	scanf("%d", &steak);
	printf("Veuillez saisir le stock de steak vegan \n");
	scanf("%d", &steakVegan);
	printf("Veuillez saisir le stock de tranche de tomate \n");
	scanf("%d", &trancheTomate);
	printf("Veuillez saisir le stock de feuille de salade \n");
	scanf("%d", &feuilleSalade);
	printf("Veuillez saisir le stock de cornichon \n");
	scanf("%d", &cornichon);
	printf("le stock de tanches d'emmental est : %d \n", verifierStock(trancheEmmental));
	printf("le stock de steaks est : %d \n", verifierStock(steak));
	printf("le stock de steaks vegan est : %d \n", verifierStock(steakVegan));
	printf("le stock de tanches de tomate est : %d \n", verifierStock(trancheTomate));
	printf("le stock de feuilles de salade est : %d \n", verifierStock(feuilleSalade));
	printf("le stock de cornichons est : %d \n", verifierStock(cornichon));
	ravitaillerAliment(&steak);
	printf("rajout de steak dans le stock de steak \n");
	printf("le stock de steaks est : %d \n", verifierStock(steak));
    return 0;
}
