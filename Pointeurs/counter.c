#include <stdio.h>

void print_hello(){
	static int i = 0;
	i++;
	printf("Bonjour le %d\n", i);
}

int main (void){
	for(int i = 0; i < 10;i++){
		print_hello();
	}

	return 0;
}
