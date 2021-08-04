#include <stdio.h>

/*
b) Un programa donde:
- Se nos muestren una suma, una resta, una multiplicación y una división sin resultado final. Ejemplo: 1+1=?
- Ingresar por teclado los resultados de cada calculo.
- Mostrar por pantalla si los resultados ingresados son correctos uno por uno.
- Mostrar por pantalla si el usuario resolvió bien todos los cálculos.
*/

int main(){

int suma,resta,multiplicacion,division;
int aciertos = 0; 
int errores = 0; 


printf("Bienvenidos a los retos matematicos Hawkings\n\n");

printf("Adivine los productos de estas operaciones\n");
printf("Al terminar los retos vera los resultados\n");


//suma


printf("\nRETO 1: SUMA\n");
printf("15 + 30 = ?\n");
printf("Ingrese el resultado: ");
scanf("%d",&suma);
if(suma==45){
	printf("\nCorrecto !! la respuesta es 45 !!\n");
	aciertos++;
}else{
printf("\nIncorrecto !!\n");
errores++;
}

//resta

printf("\nRETO 2: RESTA\n");
printf("\n60 - 25 = ?");
printf("\nIngrese el resultado: ");
scanf("%d",&resta);
if(resta==35){
	printf("\nCorrecto !! la respuesta es 35 !!\n");
	aciertos++;
}else{
printf("\nIncorrecto !!\n");
errores++;
}

//multiplicacion

printf("\nRETO 3: MULTIPLICACION\n");
printf("\n60 x 3 = ?\n");
printf("Ingrese el resultado: ");

scanf("%d",&multiplicacion);
if(multiplicacion ==180){
	printf("\nCorrecto !! la respuesta es 180 !!\n");
	aciertos++;
}else{
printf("\nIncorrecto !!\n");
errores++;
}

//division

printf("\nRETO 4: DIVISION\n");
printf("\n60 / 20 = ?\n");
printf("Ingrese el resultado: ");

scanf("%d",&division);
if(division==3){
	printf("\nCorrecto !! la respuesta es 3 !!\n");
	aciertos++;
}else{
printf("\nIncorrecto !!\n");
errores++;
}

//SCOREBOARD

printf("\nRESULTADOS TOTALES:\n\n");
printf("Usted ha tenido %d aciertos\n" ,aciertos );
printf("Usted ha tenido %d errores\n" ,errores );






return 0;
}
