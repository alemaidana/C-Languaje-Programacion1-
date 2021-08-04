#include <stdio.h>
#include <stdlib.h>

// 1- Hallar el precio medio de un producto, calculado 
//a partir del precio del mismo en tres mercados distintos. 
//Los precios para el cálculo son introducidos por el usuario.


int main() {
    double p1, p2, p3, promedio;

printf("Sistema buscador de precios:");

    printf ("\nIntroduzca el precio en el mercado 1: ");
    scanf ("%lf", &p1);
    printf ("Introduzca el precio en el mercado 2: ");
    scanf ("%lf", &p2);
    printf ("Introduzca el precio en el mercado 3: ");
    scanf ("%lf", &p3);

    promedio = (p1 + p2 + p3) / 3;
    printf ("\nEl precio promedio del producto es de %.2lf pesos", promedio);
    return 0;
}
