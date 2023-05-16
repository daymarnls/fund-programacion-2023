/*Eliminación de elemento: Escriba un programa en C que lea un vector de 10 
elementos y un número entero. El programa debe eliminar el número del 
vector si está presente y mostrar el vector resultante en la pantalla.*/

#include <stdio.h>
int main() {
 int vector[10];
 int num, i, j, pos = -1;
 printf("Ingrese los 10 elementos del vector:\n");
 // leer los elementos del vector
 for(i = 0; i < 10; i++) {
 scanf("%d", &vector[i]);
 }
 printf("Ingrese el número a eliminar:\n");
 scanf("%d", &num);
 // buscar el número en el vector
 for(i = 0; i < 10; i++) {
 if(vector[i] == num) {
 pos = i;
 break;
 }
 }
 // eliminar el número del vector (si está presente)
 if(pos != -1) {
 for(i = pos; i < 9; i++) {
 vector[i] = vector[i+1];
 }
 vector[9] = 0;
 }
 // imprimir el vector resultante
 printf("El vector resultante es:\n");
 for(i = 0; i < 10; i++) {
 printf("%d ", vector[i]);
 }
 return 0;
}