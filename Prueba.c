#include <stdio.h>
#define PI 3.14159
int main()

{
int r;
float l;
float a;
printf("Introduce radio (entero): ");
scanf("%d", &r);
l=2*PI*r; 
a=PI*pow(r,2);
printf("La longitud de la circunferencia vale %.3f\n", l);
printf("El área del círculo vale %.3f\n", a);
}
