#include <stdio.h>
#include <stdlib.h>

int main (void){
	int tab[10];
	tab[100000] = 10;
	printf("%d",tab[100000]);
	
}
