

//Paso de funciones como parametros

#include <stdio.h>

void aplicarFuncion(int (*funcion)(int), int num);
int cuadrado(int x);
int cubo(int x);

int main() {
 
 int num = 5;
 
 printf("Aplicando la función cuadrado a %d: ", num);
 aplicarFuncion(cuadrado, num);  //primer llamado a la funcion, ingresan funcion_cuadrado y un numero
 printf("Aplicando la función cubo a %d: ", num);
 aplicarFuncion(cubo, num); //primer llamado a la funcion, ingresan funcion_cubo y un numero
 
 return 0;
}

void aplicarFuncion(int (*funcion)(int), int num) { //funcion par aplicar la funcion cuadrado y cubo
 int resultado = funcion(num);
 printf("%d\n", resultado);
}

int cuadrado(int x) { //declaracion de la funcion para el cuadrado de un numero
 return x * x;
}

int cubo(int x) { //declaracion de la funcion para el cubo de un numero
 return x * x * x;
}
