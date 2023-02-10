#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculerDelta (double a, double b, double c){
	return pow(b,2) - 4 * a * c;
}

void solutions (int* nbsolution, double* s1, double* s2,double a, double b, double c){
	double d;
	d = calculerDelta(a, b, c);
	if (d < 0){
		*nbsolution = 0;
	}
	else if (d == 0){
		*s1 = -b / (2*a);
		*nbsolution = 1;
	}
	else {
		*s1 = (-b + sqrt(d)) / (2*a);
		*s2 = (-b - sqrt(d)) / (2*a);
		*nbsolution = 2;
	}
	
}

int main (){
	double a, b, c, s1, s2;
	int nbsolution;
	printf("Veuillez saisir a \n");
	scanf("%lf", &a);
	printf("Veuillez saisir b \n");
	scanf("%lf", &b);
	printf("Veuillez saisir c \n");
	scanf("%lf", &c);
	printf("Le delta est : %.2lf \n", calculerDelta(a, b, c));
	solutions (&nbsolution, &s1, &s2, a, b, c);
	switch (nbsolution){
		case 0 :
			printf("Il n'y a pas de solution");
			break;
		case 1 :
			printf("Il y a 1 solution : %lf \n", s1);
			break;
		case 2 :
			printf("Il y a 2 solutions : %lf et %lf \n", s1, s2);
			break;
		default :
			printf("ERROR");
			break;
	}
	return 0;
}
