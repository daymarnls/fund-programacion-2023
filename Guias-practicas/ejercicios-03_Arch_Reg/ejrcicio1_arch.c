
#include <stdio.h>

struct CLIENTE {    //registro
 char nombre[30];
 char apellido[30];
 unsigned int cedula;
 char direccion[100];
}cli;

int registro_clientes(FILE *pf);

int main () {
 
 FILE *pf;
 int c;
 pf = fopen("clientes.dat", "w");  //apertura del archivo en modo escritura
 
 if (pf == NULL) {   //validacion para que el archivo no trabajar con un archivo vacio
    printf("Error al abrir el fichero.\n");
    return -1;
 } else{
    printf("Fichero abierto correctamente.\n");
    c = registro_clientes(pf);
    if (c>0){ 
        printf("Registro guardado con exito!");
    }
    fclose (pf);
    return 0;
    }
}

int registro_clientes(FILE *pf){   //declaracion de funcion
 printf("Ingrese el nombre del cliente: \n");
 scanf("%s", cli.nombre);   //acceder a los campos del struc
 printf("Ingrese el apellido del cliente: \n");
 scanf("%s", cli.apellido);
 fprintf(pf, "%s, %s", cli.nombre, cli.apellido); //fprintf para ecribir dentro del archivo
 return 1;
}