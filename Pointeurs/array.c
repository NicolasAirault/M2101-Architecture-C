#include <stdio.h>
#include <stdlib.h>

int *create_array(int size){
	int *array = malloc(size*sizeof(int));
	for(int i = size; i >= 1; i--){
		array[size-i] = i;
	}
	return array;
}

void display_array(int *array, int size){
	printf("Voici l'affichage 1 :");
	for(int i = 0; i < size; i++){
		printf("|%d|",array[i]);
	}
}

void display_array2(int *array, int size){
	int *fin = array + size;
	printf("Voici l'affichage 2 : ");
	for(int *p = array; p < fin; p++){
		printf("|%d|",*p);
	}
}

int main (void){
	int size = 50;
	int *tab = create_array(size);
	display_array(tab,size);
	display_array2(tab,size);
	free(tab);
	tab = NULL;
}
