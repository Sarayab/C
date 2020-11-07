#include <stdio.h>
#include <stdio.h>

float a,b,c; 
int main ()
{
	printf("Dame el \'primer\' numero:");
	scanf("%f", &a);
	
	printf("\nDame el \'segundo\' numero:");
	scanf("%f", &b);
	
	int opcion;
	printf("Eige una opcion:");
	printf("\t 1.- mutiplicación:\n");
	printf("\t 2.- divicion:\n");
	printf("\t 3.- potencia:\n");
	printf("\t 4.- raíz cuadrada:\n");
	printf("\t 5.- Salir:\n");
	scanf("%d",&opcion);
	switch(opcion)
	{
		case 1:
			c = a * b ;
			printf("\t%.02f * %0.2f = %0.2f\n", a,b,c);
		break;
			
		case 2:
			c = a/ b;
				printf("\t%.02f / %0.2f = %0.2f\n", a,b,c);
		break;
		
		case 3:
			c = pow (a,b); 
			printf ("\t%.02f elevando la potencia / %0.2f es %0.2f\n",a,b,c);
				c = pow (b,a); 
			printf ("\t%.02f elevando la potencia / %0.2f es %0.2f\n",a,b,c);
		break;
			
		case 4: 
	    	c= sqrt (a);
		    printf("\n\t La Raiz Cuadrada de %f es: %f", a, c);
		    c= sqrt (b);
		    printf("\n\t La Raiz Cuadrada de %f es: %f", b, c);
		break;
		default:
			printf("No está puesta correctamente la opcion\n");
			exit(0);
	}
	printf("\nFin de Swich\n");
	return 0;
}
