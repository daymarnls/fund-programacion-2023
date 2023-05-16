/*Ordenamiento de elementos: Escriba un programa en C que lea un vector de 
10 elementos y ordene los elementos en orden ascendente. Imprima el vector 
ordenado en la pantalla.*/

#include <stdio.h>
int main() {
 int vector[10];
 int i, j, temp;
 printf("Ingrese los 10 elementos del vector:\n");
 // leer los elementos del vector
 for(i = 0; i < 10; i++) {
 scanf("%d", &vector[i]);
 }
 // ordenar el vector en orden ascendente
 for(i = 0; i < 10; i++) {
 for(j = 0; j < 9 - i; j++) {
 if(vector[j] > vector[j+1]) {
 temp = vector[j];
 vector[j] = vector[j+1];
 vector[j+1] = temp;
 }
 }
 }
 // imprimir el vector ordenado
 printf("El vector ordenado en orden ascendente es:\n");
 for(i = 0; i < 10; i++) {
 printf("%d ", vector[i]);
 }
 return 0;
}