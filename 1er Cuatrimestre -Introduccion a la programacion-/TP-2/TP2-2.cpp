#include <iostream>

//Realizar un algoritmo que calcule el salario de un obrero, 
//si obtuvo un incremento del 25% sobre su salario anterior.

int main (int argc, char** argv) {

int salario;
float aumentosalario;
printf("Calculadora de salario mensual: \n\n");
printf("ingrese su salario mensual por favor: \n");
scanf("%d",&salario);
printf("Usted ha recibido un incremento del %25 \n");
aumentosalario=(25*salario)/100+salario;
printf("El salario que le corresponde es: $ %0.2f", aumentosalario);


return 0;

}
