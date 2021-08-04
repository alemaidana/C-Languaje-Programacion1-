#include <stdio.h>

int main(int argc, char *argv[]){

//- Realizar un programa que muestre si dos números ingresados por teclado son iguales, distintos o si uno es mayor al otro.

int a, b;
bool validacion = false;

printf("Trabajo Practico <8> <b>");

printf("\n\nIngrese 2 numeros para su respectiva comparacion\n");
printf("\nIngrese el primer numero\n");
scanf("%d",&a);
printf("Ingrese el segundo numero\n");
scanf("%d",&b);

if(a == b){
	printf("\nLos numeros ingresados son iguales");
    validacion = true;
}else{
    printf("\nLos numeros ingresados son distintos uno del otro\n");	
    validacion = false;
}

if (validacion == false){


if(a > b) {
	printf("De los dos numeros ingresados: %d es el mayor", a);
}else {
	printf("De los dos numeros ingresados: %d es el mayor", b);
}

}

return 0;
}
