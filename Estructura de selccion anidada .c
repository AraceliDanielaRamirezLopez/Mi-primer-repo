#include <stdio.h>// Cabecera 

int main()// funci�n principal 
{
	int A = 0; 
	//estructura de selecci�n anidada 
	if ( A == 0 )
	{ 
		printf ("El numero es 0\n");// se agrega un if dentro de otro if 
	}else{
		if ( A > 0 )
		{ 
		printf ("El numero %d es positivo\n,", A);
		}
	else 
		{
		printf ("El numero %d es negativo\n,", A);
		}	
	}	
	printf ("Fin de la estructura de control\n");
	return 0;
}

