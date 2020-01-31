/* Imprime si un número es múltiplo del segundo */
#include<stdio.h>
#include<stdlib.h>
#include<stdin.h>

Void main(){
	Int a, b;
	Printf(“Ingrese 2 enteros: ”);
	Scanf(“%d %d”, &a, &b);
	If(a%b == 0)   printf(“%d es múltiplo de %d”, a,  b);
	Else  printf(“%d NO es múltiplo de %d”, a,  b);
}
