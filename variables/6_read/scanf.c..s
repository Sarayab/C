#include <stdio.h>
#define PI 3.14159
int main()
{
	
	int  r;
	float l, a, c, d;
	printf("Introduce radio(entero): ");
	scanf("%d",&r);
	printf("\nPotencia\n");
	c= pow(PI,d);
	printf("\t%0.2f elevado a la potencia / %0.2f es  %0.2f\n",PI,l,a,c,d);
	printf("Multiplicacion\n");
	l=2*PI*r;
	printf("\t%0.2f * %0.2f * %0.2f = %0.2f\n",2,PI,r);
	printf("Multiplicacion\n");
	a=PI*r*r;
	printf("\t%0.2f * %0.2f * %0.2f = %0.2f\n",PI,r,r);
	printf("La longitud de la circunferencia vale %0.2f/n",l);
	printf("El area del circulo vale %0.2f/n",a);		
}
