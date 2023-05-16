/*Ejemplo de programa en C que lee dos vectores de 10 elementos y calcula un 
tercer vector que contiene el producto de los elementos correspondientes de 
los dos vectores utilizando funciones:*/

#include <stdio.h>

void leer_vector(int vector[], int tam) {
 int i;
 for(i = 0; i < tam; i++) {
 scanf("%d", &vector[i]);
 }
}
void producto_vectores(int vector1[], int vector2[], int producto[], int tam) {
 int i;
 for(i = 0; i < tam; i++) {
 producto[i] = vector1[i] * vector2[i];
 }
}
void imprimir_vector(int vector[], int tam) {
 int i;
 for(i = 0; i < tam; i++) {
 printf("%d ", vector[i]);
 }
 printf("\n");
}
int main() {
 int vector1[10], vector2[10], producto[10];
 printf("Ingrese los 10 elementos del primer vector:\n");
 leer_vector(vector1, 10);
 printf("Ingrese los 10 elementos del segundo vector:\n");
 leer_vector(vector2, 10);
 producto_vectores(vector1, vector2, producto, 10);
 printf("El vector resultante es:\n");
 imprimir_vector(producto, 10);
 return 0;
}