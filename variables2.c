#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a,b,c;// declarando variables 
int a1, b1, c1;// declarando variables 
int main()
{
	system("clear");//limpiar la pantalla
	printf("Dame el \'primer\'numero\n");
	scanf("%f",&a);//va a entrar un flotando y se guarda en la direccion de memoria

	
	printf("\nDame el \'segundo\'numero\n");
	scanf("%f",&b);//contraparte de imprimir 

	printf ("Suma\n");
	c= a + b; // suma o adición
	printf ("\t%0.2f + %0.2f = %0.2f\n", a, b, c);
	
	printf ("Resta\n");
	c= a - b; 
	printf ("\t%0.2f - %0.2f= %0.2f\n", a, b, c); 
	
	printf ("Miltiplicacion\n");
	c= a * b; 
	printf ("\t%0.2f * %0.2f= %0.2f\n", a, b, c); 
	
	printf ("Division\n");
	c= a / b; 
	printf ("\t%0.2f / %0.2f= %0.2f\n", a, b, c); 
	
	printf ("Modulo\n");
	a1= a;
	b1= b; 
	c1= a1 % b1; 
	printf ("\tEl modulo de %d/%d = %d\n", a1, b1, c1); 
	
	printf ("Raiz cuadrada\n");
	c= sqrt (a);
	printf ("\tLa raiz Cuadrada de %f es: %f\n", a, c);
	c= sqrt (b);
	printf ("\tLa raiz Cuadrada de %f es: %f\n", b, c);

	printf ("Potencia\n");
	c= pow (a, b);
	printf ("\t%0.2f elevado a la potencia / %0.2f es: %0.2f\n", a, b, c);
	c= pow (b, a);
	printf ("\t%0.2f elevado a la potencia / %0.2f es: %0.2f\n", b, a, c);

	c = (a/b)*(a+b);
	printf ("t\%0.2f / %0.2f * %0.2f + %0.2f = %0.2f\n,", a, b, a, b, c); 
		
return 0; 
}

