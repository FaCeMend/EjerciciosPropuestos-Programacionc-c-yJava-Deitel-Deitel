/* Imprime si un número es par o impar */
#include<stdio.h>
#include<stdlib.h>
#include<stdin.h>

void main(){
	int a;
	printf(“Introduzca un numero entero: ”);
	scanf(“%d”,&a);
	if(a%2 == 0)
		printf(“El número es Par\n”);
	else	printf(“El número es Inpar\n”);
}
