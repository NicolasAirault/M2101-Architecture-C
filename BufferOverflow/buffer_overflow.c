#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {
	char buffer[100];
	if (argc > 1) {
		strcpy (buffer, argv[1]);
		printf ("Voici votre saisie: %s\n", buffer);
	}
	return 0;
}

