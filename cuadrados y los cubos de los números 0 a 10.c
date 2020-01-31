/* Imprime los cuadrados y los cubos de los números 0 a 10 */
#include<stdio.h>
#include<stdlib.h>
#include<stdin.h>

Void main(){
  Int x=0, y=0, z=0, a, b;
  Printf(“Numero\tCuadrado\tCubo\n”);

  while(x==y){
	  If(x == 11){
		  System(“pause”);
		  Exit(-1);
    }//fin if
    a = x * x;
    b = x * x * x;
    printf(“%d\t%d\t%d\n”, z, a, b);
    x++;   y++;   z++;
  }//fin while
}
