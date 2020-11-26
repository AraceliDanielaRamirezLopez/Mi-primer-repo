#include<stdio.h>
#include<stdlib.h>
#include<math.h >
#include<locale.h>

float suma(float a, float b){
	float c = 0; 
	c = a + b; 
	return c; 
	}

float resta(float a, float b){
	float c = 0; 
	c = a - b; 
	return c; 
	}
	
float division(float a, float b){
	float c = 0; 
	c = a / b; 
	return c; 
	}

float multiplicacion(float a, float b){
	float c = 0; 
	c = a * b; 
	return c; 
	}

long factorial(float x){
	if (x ==0 )
		return 1; 
	else 
		return x * factorial (x - 1); 
}

int main()
{
	setlocale(LC_ALL,"spanish");
	int opcion; 
	float a;
	float b;
	float c;
		
	do{
		printf("---------------------------\n");
		printf("Introduce el primer n�mero: ");
		scanf("%f",&a);
		printf("---------------------------\n");		
		printf("Introduce el segundo n�mero: ");
		scanf("%f",&b);
	
		printf("---------------------------\n");
		printf("Elige una opci�n:\n");
		printf("\t 1.- Suma:\n");
		printf("\t 2.- Resta:\n");
		printf("\t 3.- Divisi�n:\n");
		printf("\t 4.- Multiplicaci�n:\n");
		printf("\t 5.- Potencia:\n");
		printf("\t 6.- Ra�z cuadrada:\n");
		printf("\t 7.- Factorial:\n");
		printf("\t 8.- Salir:\n");
		printf("---------------------------\n");
		scanf("%d",&opcion);
	
		switch(opcion){
			case 1: 
				c = suma(a,b);	
				printf ("La suma es: %.2f\n", c);
				break;
			case 2: 
				c = resta(a,b);
				printf ("La resta es: %.2f\n", c);
				break;
			case 3: 
				if (b == 0){
				printf ("No esta definida la divisi�n entre 0\n");	
				}else{
				c = division(a,b);
				printf ("La divisi�n es: %f\n", c);
				}
				break;
			case 4:
				if (b == 0){
				printf ("Cualquier n�mero multiplicado por 0 dara 0\n");
				}else{
				c = multiplicacion (a,b);
				printf ("La multiplicaci�n es: %f\n", c); 
				}
				break;
			case 5: 
				if (b == 0){
				printf ("Cualquier n�mero elevado a 0 dar� 1\n");
				}else{
				c = pow (a,b);
				printf ("La potencia de %.2f elevado a %.2f es: %f\n", a, b, c);
				}	
				break;	
			case 6: 
				c = sqrt(a);
				printf ("La ra�z cuadrada de %f es: %f\n", a, c);
				c = sqrt(b);
				printf ("La ra�z cuadrada de %f es: %f\n", b, c);
				break;
			case 7:
				c= factorial(a);
				printf ("El factorial de %.1f es: %.2f\n",a,c);
				c= factorial(b);
				printf ("El factorial de %.1f es: %.2f\n",b,c);
				break;
				
			case 8: 
			 	printf("Vuelva pronto\n");
			 	break;
			default:
			printf("No est� puesta correctamente la opci�n\n");
			exit(0);
		}
	}while( opcion != 8);	
} 
