#include <iostream>

//1-Lograr un algoritmo donde se puedan ingresar 
//las notas de tres trimestres, sacar el promedio del año y nos diga si aprobó el alumno/a

int main (int argc, char** argv) {

float notauno;
float notados;
float notatres;
printf("ISFT 220\n\n");
printf("Introduccion a la programacion.\n\n");
printf("Estimado Alumno/a le pedimos que ingrese sus notas al sistema para saber si ha promocionado o no la materia.\n\n");
printf("Ingrese la primer nota del trimestre: \n");
scanf("%f",&notauno);
printf("Ingrese la segunda nota del trimestre: \n");
scanf("%f",&notados);
printf("Ingrese la tercer nota del trimestre: \n");
scanf("%f",&notatres);
float promedio=(notauno+notados+notatres)/3;
printf("Su promedio en la materia es: %0.2f",promedio);
if(promedio>=6) {
	printf("\nFelicitaciones! Su promedio es mayor a 6, Usted ha aprobado la materia!");
}else{
    printf("\nSu promedio es inferior a 6, usted ha desaprobado la materia.");
}

return 0;
	
}
