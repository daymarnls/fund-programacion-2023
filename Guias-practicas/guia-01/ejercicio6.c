
/*Escribir en lenguaje C un programa que:
 * 1º) Pida por teclado una cantidad (dato entero) en dolares.
 * 2º) Calcule su equivalente en euros.
 * 3º) Muestre por pantalla el resultado (dato real).

Nota: 1 euro = 166,386 dolares.*/


#include <stdio.h>
#define E 166.386

int main(){
	
	int n;
	float result;
	
	printf("\nIngrese la cantidad de dolares a convertir: ");
	scanf("%d", &n);
	
	result=(n*E);
	
	printf("\t%d dolares equivalen a %0.2f euros\n\n", n, result);
	
	return 0;
	
}
