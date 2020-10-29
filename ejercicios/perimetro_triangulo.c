#include <stdio.h>

int main (){
	//Declaracion de variables 
	int lados;
	float r, a, b, c;
	
	//Instrucciones para el usuario 
	printf ("Ingresa un número a cada lado para calcular el perímetro del triángulo:");
	//Leemos las variables lados 
	
	printf("Dame el \'primer\' numero:\n");
	scanf("%f", &a); 
	
	printf("Dame el \'segundo\' numero:\n");
	scanf("%f", &b);
	
	printf("Dame el \'tercer\' numero:\n");
	scanf("%f", &c);

	printf("perimetro\n");
	r = a + b + c; 
	printf("\t%0.2f + %0.2f + %0.2f  =  %0.2f\n",a , b, c, r);
	
	return 0;
}
