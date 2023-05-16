/*Búsqueda de elemento: Escriba un programa en C que lea un vector de 10 
elementos y un número entero. El programa debe buscar el número en el 
vector y mostrar su posición en el vector (o informar si no está presente en el 
vector).*/

#include <stdio.h>
int main() {
 int vector[10];
 int num, i, pos = -1;
 printf("Ingrese los 10 elementos del vector:\n");
 // leer los elementos del vector
 for(i = 0; i < 10; i++) {
 scanf("%d", &vector[i]);
 }
 printf("Ingrese el número a buscar:\n");
 scanf("%d", &num);
 // buscar el número en el vector
 for(i = 0; i < 10; i++) {
 if(vector[i] == num) {
 pos = i;
 break;
 }
 }
 // imprimir la posición del número en el vector (o informar si no está presente)
 if(pos == -1) {
 printf("El número %d no se encuentra en el vector.\n", num);
 } else {
 printf("El número %d se encuentra en la posición %d del vector.\n", num,
pos);
 }
 return 0;
}
