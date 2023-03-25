
/*Escribir en lenguaje C un programa que:
 * 1º) Pida por teclado una hora en horas, minutos y segundos (datos enteros).
 * 2º) Calcule cuántos segundos han pasado desde las 0:0:0 horas.
 * 3º) Muestre por pantalla el resultado (dato entero).*/

#include <stdio.h>

int main(){
	
	int hh, mm, ss;
	int h, m, s;
	
	printf("\nIngrese la hora: ");
	scanf("%d:%d:%d", &h,&m,&s);
	
	hh=h*3600;
	mm=m*60;
	ss=hh+mm+s;
	
	printf("\t=> Han pasado %d segundos desde las 0:0:0 horas", ss);
	
	
	return 0;
	
}
