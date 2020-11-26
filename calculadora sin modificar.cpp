#include<stdio.h>
#include<stdlib.h>
#include<math.h >
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"spanish");
	int opcion; 
	float a;
	float b;
	float c;
		printf("Introduce el primer número: ");
		scanf("%f",&a);
		printf("Introduce el segundo número: ");
		scanf("%f",&b);
			
	printf("Elige una opción:\n");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- División:\n");
	printf("\t 4.- Multiplicación:\n");
	printf("\t 5.- Potencia:\n");
	printf("\t 6.- Raíz cuadrada:\n");
	printf("\t 7.- Salir:\n");
	scanf("%d",&opcion);
	switch(opcion)
	{
	case 1: 
		c= a +b ;
		printf ("La suma es: %.2f", c);
		break;
	case 2: 
		c = a - b ;
		printf ("La resta es: %.2f", c);
		break;
	case 3: 
		if (b == 0){
			printf ("No esta definida la división entre 0\n");	
		}else{
			c = a / b;
			printf ("La división es: %.2f", c);
		}
		break;
	case 4:
		if (b == 0){
			printf ("Cualquier número multiplicado por 0 dara 0\n");
		}else{
			c = a * b;
			printf ("La multiplicación es: %.2f", c); 
		}
		break;
	case 5:
		if (b == 0){
			printf ("Cualquier número elevado a 0 dara 1\n");
		}else{
			c = pow (a,b);
			printf ("La potencia de %.2f elevado a %.2f es: %f", a, b, c);
		}	
		break;	
	case 6: 
		c = sqrt(a);
		printf ("La raíz cuadrada de %f es: %f\n", a, c);
		c = sqrt(b);
		printf ("La raíz cuadrada de %f es: %f\n", b, c);
		break;
	case 7: 
		printf("Vuelva pronto");
		break;
		
	default:
		printf("No está puesta correctamente la unidad\n");
		exit(0);
	}
	
} 
