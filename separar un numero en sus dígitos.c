/* descompone un número en sus dígitos */
#include<stdio.h>
#include<stdlib.h>
#include<stdin.h>

void main(void) {
        int num, a, b, c, d, e;
        
        Printf(“Introduzca un números de 5 dígitos: ”);
        if (numero >= 10000){
          if (numero <= 99999){
            a = num / 10000;
            b = (num % 10000) / 1000;
            c = (num % 10000) % 1000 / 100;
            d = ((num % 10000) % 1000) % 100 / 10;
            e = (((num % 10000) % 1000) % 100) % 10;

            printf(" %d %d %d %d %d",a,b,c,d+,e);
        }}
        Return 0; // finalización exitosa del programa
    }
