
/*Escribir en lenguaje C un programa que:
 * 1º) Pida por teclado dos números (datos enteros) y sean almacenados en dos variables, llamadas v1
 * y v2.
 * 2º) Intercambie los valores de las variables.
 * #0000003º) Muestre por pantalla los valores contendidos en las variables.*/

#include <stdio.h>

int main(){
	
	int v1, v2;
	
	printf("\nIngrese el valor de a: ");
	scanf("%d", &v1);
	printf("Ingrese el valor de b: ");
	scanf("%d", &v2);
	
	v1=(v1+v2);
	v2=(v1-v2);
	v1=(v1-v2);
	
	printf("\nAhora a=%d y b=%d\t", v1, v2);
	
	return 0;
	
}
