#include <iostream>
/*	
- Realizar un programa que muestre si un sueldo ingresado esta entre 500 y 1000 dólares o si esta arriba o abajo de ese tope.
	*/


int main(int argc, char** argv) {

int sueldo; 

printf("Trabajo practico <8> 3");
printf("\n\nBanco Galicia");
printf("\n\n-Departamento de consulta de sueldos-");
printf("\n\nIngrese su sueldo por favor:");
scanf("\n%d",&sueldo);
if(sueldo < 500){
	printf("\nSu sueldo %d en dolares es menor al sueldo estandar", sueldo);
}else if(sueldo>1000){
	printf("\nSu sueldo %d en dolares es mayor al sueldo estandar", sueldo);
}else{
	printf("\nSu sueldo %d posee los valores estandar entre los 500 y 1000 dolares", sueldo) ;
}

printf("\n\nRecuerde que el sueldo estandar oscila entre 500 y 1000 dolares");
printf("\n\nGracias por su consulta!!");

	return 0;
}
