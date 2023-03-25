
/*Elabore un programa en C que:
 * 1º)Pida por teclado la nota de tres exámenes (datos reales)
 * 2º)Calcule la nota media de los tres exámenes.
 * 3º)Muestre por pantalla el resultado (dato real)*/

#include <stdio.h>

int main(){
	
	float n1, n2, n3, prom;
	
	printf("\nIngrese las notas 3 notas del estudiante");
	printf("\nNota 1: ");
	scanf("%f", &n1);
	printf("Nota 2: ");
	scanf("%f", &n2);
	printf("Nota 3: ");
	scanf("%f", &n3);
	
	prom=(n1+n2+n3)/3;
	
	printf("\nEl resultado final es %0.2f \t", prom);
	
	return 0;
	
}
