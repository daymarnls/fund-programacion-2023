
/*Escribir en lenguaje C un programa que:
 * 1º) Pida por teclado tres números (datos enteros).
 * 2º) Muestre el mayor de los tres números introducidos.*/


#include <stdio.h>

int main(){
	
	int n1, n2, n3;
	
	printf("\nIngrese tres numeros");
	printf("\n\t=> ");
	scanf("%d",&n1);
	printf("\t=> ");
	scanf("%d",&n2);
	printf("\t=> ");
	scanf("%d",&n3);
	
	if((n1>n2)&&(n1>n3)){
		printf("\n%d es mayor que %d y %d\t", n1, n2, n3);
	}else{
		if((n2>n1)&&(n2>n3)){
			printf("\n%d es mayor que %d y %d\t", n2, n1,n3);
		}else{
			printf("\n%d es mayor que %d y %d\t", n3, n1, n2);
		}
	}
	
	return 0;
	
}
