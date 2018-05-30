#include <stdio.h>

int my_strlen(const char *str){
	int compteur = 0;
	while(*str != '\0'){
		compteur++;
		str++;
	}
	printf("Longueur de la chaine : %d\n",compteur);
}

int main (void){
	char chaine[] = "Bonjour";
	my_strlen(chaine);
}
