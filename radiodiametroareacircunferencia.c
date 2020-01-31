#include<stdio.h>
#include<stdlib.h>
#include<stdin.h>

int main(int argc, char *argv[]) {
	int radio, diametro, circunferencia, area;
	int pi = 3.1416;
	printf("\nIngrese el radio del circulo: ");
	scanf("%d",&radio);
	circunferencia=2*pi*radio; 
	diametro=circunferencia/pi; 
	area=pi*(radio*radio);
	printf("\n\nLa circunferencia es: %d",circunferencia);
	printf("\nEl diametro es: %d",diametro);
	printf("\nEl area es: %d\n",area);
	return 0;
}
