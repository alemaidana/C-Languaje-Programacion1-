#include <iostream>

//2-Lograr un algoritmo 
//que determine cuanto pagara una persona 
//por su compra, teniendo en cuenta que se 
//hace un 20% de descuento a quienes compren por mas de $1000

int main (int argc, char** argv) {

int a;
float descuento;
printf("Bienvenido descuentos de supermecados DIA%: \n\n");
printf("Ingrese por favor el valor de su compra: \n");
scanf("%d",&a);
printf("Analizando descuentos... \n");
if (a>=1000){
	descuento=a-(20*a)/100;
printf("\nA su compra le corresponde un 20 porciento de descuento\n");
printf("\nSu compra con descuento es:$ %0.2f", descuento );
}else {
printf("\nSu compra no es mayor a $1000, no se le ha realizado descuentos" );
}


return 0;

}
