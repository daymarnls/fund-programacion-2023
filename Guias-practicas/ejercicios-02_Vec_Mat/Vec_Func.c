/*Escriba un programa en C que lea un vector de 10 elementos y calcule la suma
de todos los elementos del vector. Imprima el resultado en la pantalla.*/

#include <stdio.h>

int main() {
 int vector[10];
 int i, suma = 0;
 
 printf("Ingrese los 10 elementos del vector:\n");
 // leer los elementos del vector
 for(i = 0; i < 10; i++) {
 scanf("%d", &vector[i]);
 }
 // sumar los elementos del vector
 for(i = 0; i < 10; i++) {
 suma += vector[i];
 }
 // imprimir la suma de los elementos
 printf("La suma de los elementos del vector es: %d", suma);
 
 return 0;
}
