/* Compara 2 números */
#include<stdio.h>
#include<stdlib.h>
#include<stdin.h>

void main(){
	int a, b;
	printf(“Introduzca 2 números enteros: ”);
	scanf(“%d %d”, &a, &b);
	
	if(a>b)
		printf(“%d es más grande que %d”, a, b);
	else if(b>a)	
    printf(“%d es más grande que %d”, b, a);
	else
    printf(“Estos números son iguales: %d, %d”, a, b);
}
