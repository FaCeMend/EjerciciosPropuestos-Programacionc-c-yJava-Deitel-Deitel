/* Imprime el número más grande y el más pequeño de 5 números */
#include<stdio.h>
#include<stdlib.h>
#include<stdin.h>

void main(){
	
printf(“Introduzca 5 números enteros:  ”);
printf(“%d %d %d %d %d”, &a, &b, &c, &d, &e);
	/* Cual es el más grande de los 5 */
	if((a>b)&&(a>c)&&(a>d)&&(a>e))
		printf(“El número más grande es %d\n”, a);
	if((b>a)&&(b>c)&&(b>d) &&(b>e))
		printf(“El número más grande es %d\n”, b);
	if((c>a)&&(c>b)&&(c>d) &&(c>e))
		printf(“El número más grande es %d\n”, c);
	if((d>a)&&(d>b)&&(d>c) &&(d>e))
		printf(“El número más grande es %d\n”, d);
	else
    printf(“El número más grande es %d\n”, e);

	/* Cual es el más pequeño de los 5 */
	if((a<b)&&(a<c) &&(a<d)&&(a<e))
		printf(“El número más pequeño es %d\n”, a);
	if((b<a)&&(b<c) &&(b<d) &&(b<e))
		printf(“El número más pequeño es %d\n”, b);
	if((c<a)&&(c<b) &&(c<d) &&(c<e))
		printf(“El número más pequeño es %d\n”, c);
	if((c<a)&&(c<b) &&(c<d) &&(d<e))
		printf(“El número más pequeño es %d\n”, d);
	else
    printf(“El número más pequeño es %d\n”, e);
}
