#include <stdio.h>

double sum1(double *tab, int size){
	double somme = 0;
	for(int i = 0; i < size; i++){
		somme = somme + tab[i];
	}
	return somme;
}

double sum2(double *tab, int size){
	double somme = 0;
	double *fin = tab+size;
	for(double *p = tab; p < fin; p++){
		somme = somme + *p;
	}
	return somme;
}

int main(void){
	double tab[] = {100,10,1,0.1,0.01};
	double taille = 5;
	double total1 = sum1(tab,taille);
	double total2 = sum2(tab);
	printf("Total 1 : %f,\n Total 2 : %f\n",total1,total2);
}
