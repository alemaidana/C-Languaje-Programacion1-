#include <stdio.h>

int main(int argc, char *argv[]){

// Realizar un programa que muestre la suma, la resta, la multiplicación y la división (con resto incluido) entre tres números ingresados por teclado.

int a , b, c;
int suma,resta,multiplicacion, division1, division2, resto1, resto2;

printf("Trabajo Practico <8> A\n\n");
printf("Ingrese el primer numero\n");
scanf("%d",&a);
printf("\nIngrese el segundo numero\n");
scanf("%d",&b);
printf("\nIngrese el tercer numero\n");
scanf("%d",&c);

suma = a + b + c;
printf("\nLa suma es: %d", suma);

resta = a - b - c;
printf("\nLa resta es: %d", resta);

multiplicacion = a * b * c;
printf("\nLa multiplicacion es: %d", multiplicacion);

division1=a/b;
division2=division1/c;

resto1= a%c;
resto2 = (a / b )% c;

printf("\n\nDivision:\n");
printf("%d / %d / %d = %d" ,a,b,c,division2);
printf(" ");
printf("\n%d : %d = %d  su resto es: %d" ,a,b,division1,resto1);
printf("\n%d : %d = %d  su resto es: %d",division1,c,division2,resto2);

return 0;

}
