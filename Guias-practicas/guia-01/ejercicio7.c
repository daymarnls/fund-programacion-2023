
/*Escribir en lenguaje C un programa que:
 * 1º) Pida por teclado un número (dato entero).
 * 2º) Muestre por pantalla:
 * 			- "ES PAR", en el caso de que el número sea divisible entre 2.
 * 			- "ES IMPAR", en el caso de que el número no sea divisible entre 2.*/


#include <stdio.h>

int main(){
	
	int num, aux;
	
	printf("Por favor, ingrse un numero: ");
	scanf("%d", &num);
	
	aux=(num%2);
	
	if((aux==0)){
		printf("\n%d es un numero PAR\t", num);
	}else{
		printf("\n%d es un numero IMPAR\t", num);
	}
	
	
	return 0;
	
}
