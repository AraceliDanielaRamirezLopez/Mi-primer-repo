#include <stdio.h>// Cabecera 

int main()// función principal 
{
	int A = 8; 
	 //estructura de if else 
	if ( A == 0 )
	{ 
		printf ("El numero es 0\n");// La ventaja sobre anidar, es que se vuelve más complejo y será más complejo al final entender la estructura del programa
	}else if ( A > 0 ){
		printf ("El numero %d es positivo\n,", A);		
	}
	else 
	{
		printf ("El numero %d es negativo\n,", A);
	}	
	printf ("Fin de la estructura de control\n");
	return 0;
}


