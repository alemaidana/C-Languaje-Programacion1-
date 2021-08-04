#include <conio.h>
#include <stdio.h>

/*
3- Escribir en lenguaje C un programa que pida por teclado una 
hora en tres variables: horas, minutos y segundos (datos enteros).
Y muestre por pantalla "hora correcta", en el caso de que la hora sea válida o
"hora incorrecta", en el caso de que la hora no sea válida.
<para que una hora sea válida, se tiene que cumplir que:>
Las horas deben ser mayor o igual que 0 y menor o igual que 23.
Los minutos deben ser mayor o igual que 0 y menor o igual que 59.
Los segundos deben ser mayor o igual que 0 y menor o igual que 59.
*/
int main()
{
    int hora, minutos, segundos;

printf("Sistema Validador horario:")

    printf( "\n\nIntroduzca horas: " );
    scanf( "%d", &hora );
    printf( "\nIntroduzca minutos: " );
    scanf( "%d", &minutos );
    printf( "\nIntroduzca segundos: " );
    scanf( "%d", &segundos );

    if ( hora >= 0 && hora <= 23 && minutos >= 0 && minutos <= 59 && segundos >= 0 && segundos <= 59 )
        printf("\nLa hora es correcta" );
    else
        printf("\nLa hora es incorrecta" );

    return 0;
}
