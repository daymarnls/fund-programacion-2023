/*Productos de elementos: Escriba un programa en C que lea dos vectores de 10
elementos y calcule un tercer vector que contenga el producto de los 
elementos correspondientes de los dos vectores. Imprima el vector resultante 
en la pantalla.*/

#include <stdio.h>
int main() {
 int vector1[10], vector2[10], producto[10];
 int i;
 printf("Ingrese los 10 elementos del primer vector:\n");
 // leer los elementos del primer vector
 for(i = 0; i < 10; i++) {
 scanf("%d", &vector1[i]);
 }
 printf("Ingrese los 10 elementos del segundo vector:\n");
 // leer los elementos del segundo vector
 for(i = 0; i < 10; i++) {
 scanf("%d", &vector2[i]);
 }
 // calcular el producto de los elementos correspondientes de los dos vectores
 for(i = 0; i < 10; i++) {
 producto[i] = vector1[i] * vector2[i];
 }
 // imprimir el vector resultante
 printf("El vector resultante es:\n");
 for(i = 0; i < 10; i++) {
 printf("%d ", producto[i]);
 }
 return 0;
}
