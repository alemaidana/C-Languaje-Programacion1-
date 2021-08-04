#include <iostream>

/*
 Realizar un programa que muestre una cuota inicial escrita por teclado 
 y permita hacerle un descuento o aumento del 10% usando la misma variable y operadores de asignación.
*/

int main(int argc, char** argv) {

int cuota;
int diezPorciento;
int option;

printf("Trabajo Practico <8> 4");
printf("\n\nMINICUOTAS RIBEIRO:");
printf("\n\nIngrese el valor de su cuota:\n");
scanf("%d",&cuota);

diezPorciento =cuota*0.1;

printf("\nSeleccione su metodo de pago:");
printf("\n\n1-Tarjeta, con aumento del 10 porciento");
printf("\n\n2-Efectivo, con descuento del 10 porciento");
printf("\n\nIngrese 1 para Tarjeta o 2 para Efectivo:\n");
scanf("%d", &option);

if(option == 1){
printf("\nSu cuota con aumento del 10 porciento es:");
cuota += diezPorciento;
printf("%d",cuota);
}; 
if(option == 2){
printf("\nSu cuota con descuento del 10 porciento es:");
cuota -= diezPorciento;
printf("%d", cuota);
};

return 0;

}
