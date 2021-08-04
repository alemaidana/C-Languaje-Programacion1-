#include <stdio.h>
/*
a) Un programa donde:
- Se ingresen el valor de una compra y en cuantas cuotas se va a pagar.
- Según la cantidad de cuotas cambiará el precio final. 1 cuota sin recargo, 
de 2 a 6 cuotas aplicar un recargo del 10%, y 6 cuotas o mas aplicar un recargo del 20%.
- Mostrar precio original, precio final y valor de cada cuota (precio final/cantidad de cuotas).

*/

int main(){

double precio;
double precioTotal;
double compra;
int pagos;


printf("Bienvenido a Fallabella\n\n");

printf("Ingrese el valor de su compra\n");
scanf("%lf", &compra);
printf("Ingrese la cantidad de cuotas\n");
printf("Recuerde que los planes son hasta 12 cuotas\n");
scanf("%d", &pagos);

if(pagos >= 13){
	
	printf("Los planes solamente se ajustan entre 1 y 12 pagos\n");
	printf("Reinicie la operacion para volver a realizar el pago\n");
	printf("\nMuchas gracias por operar con nosotros. Lo esperamos pronto\n");
}


if(pagos == 1){
	precio = compra;
	printf("Al realizarse en un solo pago el total es:  %.2lf",precio);
}

if (pagos >=2 && pagos <=6){
	precio = compra + (compra * 0.10);
	precioTotal= precio/pagos;
	printf("El precio original es: $%.2lf",compra);
	printf("\nEl precio con recargo del 10 porciento es: $%.2lf",precio);
	printf("\nUsted debe abonar %d",pagos);
	printf(" pagos de: $%.2lf",precioTotal);
    printf("\n\nMuchas gracias por su compra ! Lo esperamos pronto!\n");
}

if (pagos >6 && pagos <=12){
	precio = compra + (compra * 0.20);
	precioTotal= precio/pagos;
	printf("El precio original es: $%.2lf",compra);
	printf("\nEl precio con recargo del 20 porciento es: $%.2lf",precio);
	printf("\nUsted debe abonar %d",pagos);
	printf(" pagos de: $%.2lf",precioTotal);
	printf("\n\nMuchas gracias por su compra ! Lo esperamos pronto!\n");
}





return 0;
	
}
