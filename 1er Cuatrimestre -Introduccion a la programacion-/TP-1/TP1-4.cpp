#include <iostream>

//4. Idear un algoritmo que nos diga el porcentaje de varones y de mujeres en un grupo.

int main (int argc, char** argv) {

float hombres;
float mujeres;
printf("ISFT 220:\n\n");
printf("Sistema calculador de genero de alumnos en clase:\n\n");
printf("Ingrese la cantidad de hombres en la clase:\n");
scanf("%f",&hombres);
printf("Ingrese la cantidad de mujeres en la clase:\n");
scanf("%f",&mujeres);
int totalcurso=hombres+mujeres;
printf("\nEl total de alumnos en el curso es: %d \n",totalcurso);
float totalhombres=(hombres/totalcurso)*100;
printf("\nEl porcentaje de hombres en el curso es: %0.2f",totalhombres);
float totalmujeres=(mujeres/totalcurso)*100;
printf("\nEl porcentaje de mujeres en el curso es: %0.2f",totalmujeres);
return 0;
	
}
