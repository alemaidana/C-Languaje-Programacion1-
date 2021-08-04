#include <conio.h>
#include <stdio.h>
/*
Escribir en lenguaje C un programa pida por teclado dos números 
(datos enteros) y sean almacenados en dos variables. Despues 
intercambie los valores de las variables.
Para finalizar muestre por pantalla los valores contendidos en las variables.
*/

int main()
{
    int var1, var2, aux;

printf("Sistema intercambio de variables:");

    printf( "\n\nIngrese el valor de la primer variable: " );
    scanf( "%d", &var1 );
    printf( "\nIngrese el valor de la segunda variable: " );
    scanf( "%d", &var2 );
    aux = var1;
    var1 = var2;
    var2 = aux;
    printf("\nCon los valores intercambiados el resultado es:");
    printf( "\nAhora, el valor de v1 es: %d", var1 );
    printf( "\nAhora, el valor de v2 es: %d", var2 );
 
 return 0;
    
}
