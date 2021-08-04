#include <conio.h>
#include <stdio.h>
/*
2-Escribir en lenguaje C un programa que pida por 
teclado una letra del abecedario y muestre por pantalla:
si es vocal cuando la letra introducida sea una vocal minúscula (a, e, i, o, u) o una vocal mayúscula (A, E, I, O, U).
o si no es vocal cuando la letra introducida n
o sea una vocal minúscula (a, e, i, o, u) ni una vocal mayúscula (A, E, I, O, U).
*/

int main()
{
    char letra;

    printf( "\nPor favor introduzca una letra: " );
    scanf( "%c", &letra );

    if ( letra == 'a' || letra == 'A' ||
         letra == 'e' || letra == 'E' ||
         letra == 'i' || letra == 'I' ||
         letra == 'o' || letra == 'O' ||
         letra == 'a' || letra == 'U' )
        printf( "\nEs vocal" );
    else
        printf( "\nNo es vocal" );

    return 0;
}
