#include <conio.h>
#include <stdio.h>

/*
1-Escribir en lenguaje C un programa que pida por teclado un 
n�mero (dato entero) y lo muestre por pantalla.
En el caso de que el n�mero sea divisible entre 2: "par"
En el caso de que el n�mero no sea divisible entre 2: "impar"
*/
int main()
{
    int numero;

    printf( "\nIntroduzca un numero entero: ");
    scanf( "%d", &numero );

    if ( numero % 2 == 0 )
        printf( "\nEl numero es par"  );
    else
        printf( "\nEl numero es impar" );

    return 0;
}
