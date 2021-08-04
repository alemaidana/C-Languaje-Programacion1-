#include <iostream>

//3. Crear un algoritmo que calcule un salario, sabiendo el numero de horas trabajadas y el valor por hora.

int main (int argc, char** argv) {

int horastrabajo;
float valorhora;/*aca considero que uno puede cobrar ej 2 mangos con 50 por hora por eso el float*/ 
float salario;
printf("Supermercados DIA%:\n\n");
printf("Sistema calculador de salarios para empleados de supermecados DIA argentina:\n\n");
printf("Ingrese la cantidad de horas trabajadas por favor:\n");
scanf("%d",&horastrabajo);
printf("Ingrese el valor de la hora por favor:\n");
scanf("%f",&valorhora);
salario=(horastrabajo*valorhora);
printf("\nAguarde unos instantes..\n\n");/*me gusta lo ochentoso de la interfaz*/
printf("\nSu salario es: $%0.2f",salario);


return 0;
	
}
