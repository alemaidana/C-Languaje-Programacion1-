#include <stdio.h>
/*
1-Realizar un programa que:
a)Nos permita elegir si queremos usar números enteros o reales.
b)Si se eligen números enteros, sumar dos números ingresados por teclado y mostrar el resultado por pantalla.
c)Si se eligen números reales, su sumar dos números con coma ingresados por teclado y mostrar el resultado por pantalla.
*/


int main(int argc, char *argv[]){

int numE1, numE2,opcion,resEnt;
float a,b,resFlt;

printf("Operaciones Matematicas entre Naturales y Reales\n\n");

printf("Que tipo de operacion desea realizar ?\n");
printf("1-Numeros Enteros\n");
printf("2-Numeros Reales\n");


printf("Elija la opcion deseada: ");
scanf("%d", &opcion);

if(opcion >= 3){
	printf("\nDebe elegir entre la Opcion 1 - Enteros o la Opcion 2 - Reales");
	printf("\n\nIntentelo otra vez, gracias por operar !! Lo esperamos pronto");
}

if(opcion == 1){
	printf("\nHa elegido la opcion de sumar dos numeros enteros\n");
	printf("\nIngrese el primer numero a sumar\n");
	scanf("%d", &numE1);
	printf("\nIngrese el segundo numero a sumar\n");
	scanf("%d", &numE2);
	resEnt = numE1+numE2;
	printf("\nEl Resultado es: %d", resEnt);
	printf("\n\nGracias por operar !! Lo esperamos pronto");
	
}

if(opcion == 2){
	printf("\nHa elegido la opcion de sumar dos numeros reales\n");
	printf("\nIngrese el primer numero a sumar\n");
	scanf("%f", &a);
	printf("\nIngrese el segundo numero a sumar\n");
	scanf("%f",&b);
	resFlt = a+b;
	printf("\nEl Resultado es: %.2f", resFlt);
	printf("\n\nGracias por operar !! Lo esperamos pronto");
}









}
