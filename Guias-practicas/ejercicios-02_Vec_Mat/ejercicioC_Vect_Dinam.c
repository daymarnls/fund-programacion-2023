/*En este ejemplo, se define un puntero "vector" sin inicializar y una variable "tam" que almacena el
tamaño del vector que el usuario introducirá. Luego se utiliza la función malloc() para asignar
memoria dinámicamente para el vector, y se comprueba si se ha podido asignar memoria
correctamente. A continuación, se pide al usuario que introduzca los elementos del vector utilizando
un bucle for, y se imprime el vector utilizando otro bucle for. Finalmente, se libera la memoria
asignada utilizando la función free().*/

#include <stdio.h>
#include <stdlib.h>

int main() {
 
 int *vector;
 int tam;
 
 printf("Introduce el tamaño del vector: ");
 scanf("%d", &tam);
 
 vector = (int*) malloc(tam * sizeof(int));  //sizeof es un operador en C que devuelve el tamaño en bytes de un tipo de dato o una variable en tiempo de compilación
 if (vector == NULL) {
    printf("Error: no se ha podido asignar memoria.\n");
    return 1;
 }

 printf("Introduce los elementos del vector:\n");
 
 for (int i = 0; i < tam; i++) {
    scanf("%d", &vector[i]);
 }

 printf("El vector es: ");
 for (int i = 0; i < tam; i++) {
    printf("%d ", vector[i]);
 }

 printf("\n");
 free(vector);

 return 0;
}
