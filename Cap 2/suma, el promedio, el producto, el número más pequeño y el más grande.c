/* Imprime la +, *, promedio, número más pequeño y número más grande de 2 números enteros*/
#include<stdio.h>
#include<stdlib.h>
#include<stdin.h>

void main(){
	int a, b, c;
	printf(“Escriba 3 enteros diferentes: ”);
	scanf(“%d %d %d”, &a, &b, &c);

	printf(“La suma es: %d”, a+b+c);
	printf(“El promedio es: %d\n”, (a+b+c)/3);
	printf(“El producto es: %d\n”, a*b*c);

	/* Cual es el más grande de los 3 */
	if((a>b)&&(a>c))
		printf(“El número más grande es %d\n”, a);
	if((b>a)&&(b>c))
		printf(“El número más grande es %d\n”, b);
	else
    printf(“El número más grande es %d\n”, c);

	/* Cual es el más pequeño de los 3 */
	if((a<b)&&(a<c))
		printf(“El número más pequeño es %d\n”, a);
	if((b<a)&&(b<c))
		printf(“El número más pequeño es %d\n”, b);
	else
    printf(“El número más pequeño es %d\n”, c);
}
