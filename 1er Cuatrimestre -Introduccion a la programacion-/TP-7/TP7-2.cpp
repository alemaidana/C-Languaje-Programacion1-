#include <stdio.h>
#include <locale.h>

/*
2-Realizar un programa que:
a)Nos permita ingresar por teclado nuestro nombre y apellido (ambos en conjunto).
b)Nos permita ingresar edad, una materia que cursemos y el año de cursada.
c)Mostrar todos los datos ingresados por pantalla.
d)Después del paso C, lograr que nos pregunte si queremos cambiar el nombre de la materia y año de cursada.
*/


int main(int argc, char *argv[]){

char materia[50];
char nombreApellido[50];
int edad, tCursada, decision;

printf("SISTEMA ALUMNOS TERCIARIO ISFT 2021\n\n");
printf("Bienvenido Administrador\n");
printf("\nIngrese su nombre y apellido separado por un espacio\n");
fgets(nombreApellido,50,stdin);
printf("\nIngrese por favor la materia a cursar:\n");
fgets(materia,50,stdin);
printf("\nIngrese su edad\n");
scanf("%d",&edad);
printf("\nIngrese por favor el año de cursada:\n");
scanf("%d",&tCursada);

printf("\n\nDATOS ALUMNO\n");
printf("-------------------------");
printf("\nNOMBRE: ");
puts(nombreApellido);
printf("MATERIA:" );
puts(materia);
printf("EDAD: %d\n",edad);
printf("\nAÑO CURSADA: %d\n", tCursada);
printf("\n-------------------------");

printf("\n\nDesea cambiar edad y año de cursada ?");
printf("\n1-SI\n2-NO");

printf("\n\nEscriba su opcion ");
scanf("%d",&decision);

if(decision == 1 ){
printf("\nIngrese su edad\n");
scanf("%d",&edad);
printf("\nIngrese por favor el año de cursada:\n");
scanf("%d",&tCursada);

printf("\n\nDATOS ALUMNO ACTUALIZADO\n");
printf("-------------------------");
printf("\nNOMBRE: ");
puts(nombreApellido);
printf("MATERIA:" );
puts(materia);
printf("EDAD: %d\n",edad);
printf("\nAÑO CURSADA: %d\n", tCursada);
printf("\n-------------------------\n\n");
	printf("\nGracias por actualizar el sistema.\n");

	
}

if(decision == 2){
	printf("\nGracias por usar el sistema.");
}

if(decision >= 3){
	printf("\nOpcion no valida vuelva a intentarlo");
}





return 0;

}
