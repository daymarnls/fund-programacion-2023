
/*Escribir en lenguaje C un programa que:
 * 1º) Pida por teclado la arista (dato real) de un cubo.
 * 2º) Calcule el volumen del cubo.
 * 3º) Muestre por pantalla el resultado (dato real).*/

#include <stdio.h>

int main(){
	
	float a, v;
	
	printf("\nIngrese el valor de la arista: ");
	scanf("%f", &a);
	
	v=(a*a*a);
	
	printf("\nEl volumen del cubo es = %0.2f cm\t", v);
	
	return 0;
	
}


/*La forfmula para calcular el volumen del cubo es (v=a**3)
 * Donde: v es el volumen y a es el tamaño (o lo que mide) una de sus aristas.
 * La arista de un cubo es la linea que une un par de sus vertices o esquinas; cabe agregar
 * que no importa que arista se toma, todas miden lo mismo valor*/
