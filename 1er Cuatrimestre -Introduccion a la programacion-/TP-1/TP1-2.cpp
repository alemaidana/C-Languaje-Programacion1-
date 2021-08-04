#include <iostream>

//2-Agregar al punto 1 si el numero es mayor o menor a 10.

int main (int argc, char** argv) {

int a;
int b;
int c;
printf("Ingrese dos numeros para sumar por favor: \n\n");
printf("Su primer numero es: ");
scanf("%d",&a);
printf("Su segundo numero es: ");
scanf("%d",&b);
c=a+b;
printf("El resultado de la suma es: %d",c);
if(c>10){
	printf("\nEl resultado es mayor a 10");
}else{
	printf("\nEl resultado es menor a 10");
}


printf("\n\nGracias por operar con nosotros");


return 0;

}
