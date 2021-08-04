#include <iostream>

//1- Hacer un algoritmo donde se ingresen 3 números y muestre cual es el mayor.

int main (int argc, char** argv) {

int a;
int b;
int c;
printf("BIENVENIDO!!\n");/*tratando de mejorar la comunicacion con el usuario*/
printf("Aqui sabremos cual de los 3 numeros que ud ingrese sera el mayor\n");
printf("\nIngrese por favor el primer numero\n");
scanf("%d",&a);
printf("Ingrese por favor el segundo numero\n");
scanf("%d",&b);
printf("Ingrese por favor el tercer numero\n");
scanf("%d",&c);
printf("\nA continuacion le diremos cual de los 3 numeros es el mayor\n");
if(a>=b){
	if(a>=c){
		printf("El mayor numero es el primer numero: %d",a);
	}else{
	printf("El mayor numero es el tercer numero: %d",c);
	}
}else{
	if(b>=c){
	       printf("El mayor numero es el segundo numero: %d",b);
	 }else{
	 	printf("El mayor numero es el tercer numero: %d",c);
	 	
	 }
}
	 
	 
	 
	 
return 0;

}
