#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
/// Precondition
/// La chaine 1 doit etre suffisament grande pour pouvoir accueillir la chaine 2
////////////////////////////////////////////////////////////////////////////////

char *my_strcat(char *dest, const char *src){
	while(*dest !='\0'){
		dest++;
	}	
	while(*src !='\0'){
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return dest;
	
}

int main (void){
	char chaine1[] ="Bonjour ";
	printf("Chaine 1 : %s\n",chaine1);
	char chaine2[] ="Le monde !";
	printf("Chaine 2 : %s\n",chaine2);
	my_strcat(chaine1,chaine2);
	printf("nouvelle chaine : %s\n",chaine1);
	printf("chaine 2 bis : %s\n",chaine2);
}
