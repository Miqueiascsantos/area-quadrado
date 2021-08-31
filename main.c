#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x=0;
	float r=0;
	
	printf("Digite o comprimento do lado do terreno: ");
	scanf("%f", &x);
	
	r= x * x;
	
	printf("area do terreno: %f m2\n", r);
	system("pause");
	
	return 0;
}
