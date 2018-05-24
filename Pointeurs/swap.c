#include <stdio.h>

void swap(double x, double y){
	double z = x;
	x = y;
	y = z;
}

void swap2 (double* x, double* y){
	double z = *x;
	*x = *y;
	*y = z;
}

int main(void){
	double a = 1;
	double b = 2;
	double* ptr_a = &a;
	double* ptr_b = &b;
	printf("a = %f et b = %f\n",a,b);
	swap(a,b);
	printf("a = %f et b = %f apres le premier swap\n",a,b);
	swap2(ptr_a,ptr_b);
	printf("a = %f et b = %f apres le deuxieme swap\n",a,b);
}
