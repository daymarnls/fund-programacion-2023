#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <float.h>


  struct Trabajador {
     char CI[20];
     char nombre[50];
     char departamento[20];
     char cargo[20];
     float sueldo;
     char fechaIngreso[11];
     float mayor_sueldo;
     float menor_sueldo;

  };

  void ingresarDatos(int n) {
      FILE *archivo;
      struct Trabajador trabajador;
      archivo = fopen("trabajadores.txt", "a");
      if (archivo == NULL) {
        printf("Error al abrir el archivo\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("Ingrese los datos del trabajador %d:\n", i+1);
        printf("Cedula de Identidad: ");
        scanf("%s", trabajador.CI);
        printf("Nombre y Apellido\nEn formato Nombre_Apellido: ");
        getchar();
        fgets(trabajador.nombre, sizeof(trabajador.nombre), stdin);
        trabajador.nombre[strcspn(trabajador.nombre, "\n")] = '\0';
        printf("\n===Departamentos disponibles===\n  \n[I] RRHH\n \n[II] Consultoría\n \n[III] Diseno\n \n[IV] Produccion\n \n[V] Calidad\n \n[VI] Distribucion\n \n Coloque el nombre completo de su deparamento\n=>  ");
        scanf("%s", &trabajador.departamento);
        printf("\n===Cargos Disponibles===\n \n[I] Gerente\n \n[II] Supervisor\n \n[III] Analista\n \n[IV] Disenador\n  \n[V] Desarrollador\n \n[VI] Auditor\n \nColoque el nombre completo de el cargo a elegir\n=>  ");
		scanf("%s", &trabajador.cargo);
        printf("Sueldo que devenga: $ ");
        scanf("%f", &trabajador.sueldo);
        printf("Fecha de ingreso (dd/mm/aaaa): ");
        scanf("%s", trabajador.fechaIngreso);
        fprintf(archivo, "%s %s %s %s %.2f %s\n", trabajador.CI, trabajador.nombre, trabajador.departamento, trabajador.cargo, trabajador.sueldo, trabajador.fechaIngreso);
    }
    fclose(archivo);
}


  void consulta_por_ci(char CI[20] ) {
     FILE* archivo = fopen("trabajadores.txt", "r");
     if (archivo == NULL) {
        printf("No se pudo abrir el archivo\n");
        return;
    }

    struct Trabajador trabajador;
    int encontrado = 0;
    while (fscanf(archivo, "%s %s %s %s %f %s", trabajador.CI, trabajador.nombre, trabajador.departamento,
                  trabajador.cargo, &trabajador.sueldo, trabajador.fechaIngreso) == 6) {
        if (strcmp(trabajador.CI, CI) == 0) {
            printf("CI: %s\nNombre: %s\nDepartamento: %s\nCargo: %s\nSueldo: %.2f\n", trabajador.CI, trabajador.nombre, trabajador.departamento, trabajador.cargo, trabajador.sueldo);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("La CI indicada no esta asociada a ningun trabajador de la empresa\n");
    }

    fclose(archivo);
}


  void consulta_por_departamento(char departamento[20]) {
     FILE* archivo = fopen("trabajadores.txt", "r");
     if (archivo == NULL) {
        printf("No se pudo abrir el archivo\n");
        return;
    }

    int contador = 0;
    float total_sueldos = 0;
    struct Trabajador trabajador;
    FILE* archivo_departamento = fopen("departamento.txt", "w");
    if (archivo_departamento == NULL) {
        printf("No se pudo abrir el archivo departamento.txt\n");
        return;
    }

    while (fscanf(archivo, "%s %s %s %s %f %s", trabajador.CI, trabajador.nombre, trabajador.departamento,
                  trabajador.cargo, &trabajador.sueldo, trabajador.fechaIngreso) == 6) {
        if (strcmp(trabajador.departamento, departamento) == 0) {
            fprintf(archivo_departamento, "%s %s %s %s %f\n", trabajador.CI, trabajador.nombre, trabajador.departamento, trabajador.cargo, trabajador.sueldo);
            contador++;
            total_sueldos += trabajador.sueldo;
        }
    }

    fclose(archivo);
    fclose(archivo_departamento);

    printf("Numero de trabajadores en %s: %d\nTotal de sueldos devengados: %.2f\n", departamento, contador, total_sueldos);
}


  void consulta_por_cargo(char cargo[20]) {
     FILE* archivo = fopen("trabajadores.txt", "r");
     if (archivo == NULL) {
        printf("No se pudo abrir el archivo\n");
        return;
    }

    int contador = 0;
    float total_sueldos = 0;
    struct Trabajador trabajador;
    FILE* archivo_cargo = fopen("cargo.txt", "w");
    if (archivo_cargo == NULL) {
        printf("No se pudo abrir el archivo cargo.txt\n");
        return;
    }

    while (fscanf(archivo, "%s %s %s %s %f %s", trabajador.CI, trabajador.nombre, trabajador.departamento,
                  trabajador.cargo, &trabajador.sueldo, trabajador.fechaIngreso) == 6) {
        if (strcmp(trabajador.cargo, cargo) == 0) {
            fprintf(archivo_cargo, "%s %s %s %s %f\n", trabajador.CI, trabajador.nombre, trabajador.departamento, trabajador.cargo, trabajador.sueldo);
            contador++;
            total_sueldos += trabajador.sueldo;
        }
    }

    fclose(archivo);
    fclose(archivo_cargo);

    printf("Numero de trabajadores con cargo %s: %d\nTotal de sueldos devengados: %.2f\n", cargo, contador, total_sueldos);
}


  void trabajador_mayor_y_menor_sueldo() {
     FILE* archivo = fopen("trabajadores.txt", "r");
     if (archivo == NULL) {
        printf("No se pudo abrir el archivo\n");
        return;
    }

    struct Trabajador trabajador;
    struct Trabajador mayor_sueldo = {"", "", "", "", 0};
    struct Trabajador menor_sueldo = {"", "", "", "", FLT_MAX};
    while (fscanf(archivo, "%s %s %s %s %f %s", trabajador.CI, trabajador.nombre, trabajador.departamento,
                  trabajador.cargo, &trabajador.sueldo, trabajador.fechaIngreso) == 6) {
        if (trabajador.sueldo > mayor_sueldo.sueldo) {
            mayor_sueldo = trabajador;
        }
        if (trabajador.sueldo < menor_sueldo.sueldo) {
            menor_sueldo = trabajador;
        }
    }

    fclose(archivo);

    printf("Trabajador con mayor sueldo:\nCI: %s\nNombre: %s\nDepartamento: %s\nCargo: %s\nSueldo: %.2f\n", mayor_sueldo.CI, mayor_sueldo.nombre, mayor_sueldo.departamento, mayor_sueldo.cargo, mayor_sueldo.sueldo);
    printf("Trabajador con menor sueldo:\nCI: %s\nNombre: %s\nDepartamento: %s\nCargo: %s\nSueldo: %.2f\n", menor_sueldo.CI, menor_sueldo.nombre, menor_sueldo.departamento, menor_sueldo.cargo, menor_sueldo.sueldo);
}



  void modificarDatos(char CI[20]) {
     FILE *archivo;
     FILE *archivo_temporal;
     struct Trabajador trabajador;
     int encontrado = 0;

    archivo = fopen("trabajadores.txt", "r");
    archivo_temporal = fopen("temp.txt", "w");
    if (archivo == NULL || archivo_temporal == NULL) {
        printf("Error al abrir el archivo\n");
        return;
    }

    while (fscanf(archivo, "%s %s %s %s %f %s", trabajador.CI, trabajador.nombre, trabajador.departamento,
                  trabajador.cargo, &trabajador.sueldo, trabajador.fechaIngreso) == 6) {
        if (strcmp(trabajador.CI, CI) == 0) {
            encontrado = 1;
            printf("Ingrese los nuevos datos del trabajador:\n");
            printf("Nombre y Apellido\nEn formato Nombre_Apellido: ");
            getchar();
            fgets(trabajador.nombre, sizeof(trabajador.nombre), stdin);
            trabajador.nombre[strcspn(trabajador.nombre, "\n")] = '\0';
            printf("\n===Departamentos disponibles===\n  \n[I] RRHH\n \n[II] Consultoría\n \n[III] Diseno\n \n[IV] Produccion\n \n[V] Calidad\n \n[VI] Distribucion\n \n Coloque el nombre completo de su deparamento \n=>  ");
            scanf("%s", trabajador.departamento);
            printf("\n===Cargos Disponibles===\n \n[I] Gerente\n \n[II] Supervisor\n \n[III] Analista\n \n[IV] Disenador\n  \n[V] Desarrollador\n \n[VI] Auditor\n \nColoque el nombre completo de el cargo a elegir \n=>  ");
            scanf("%s", trabajador.cargo);
            printf("Sueldo que devenga: $ ");
            scanf("%f", &trabajador.sueldo);
            printf("Fecha de ingreso (dd/mm/aaaa): ");
            scanf("%s", trabajador.fechaIngreso);
            fprintf(archivo_temporal, "%s %s %s %s %.2f %s\n", trabajador.CI, trabajador.nombre, trabajador.departamento,
                    trabajador.cargo, trabajador.sueldo, trabajador.fechaIngreso);
            printf("Datos modificados exitosamente\n");
        } else {
            fprintf(archivo_temporal, "%s %s %s %s %.2f %s\n", trabajador.CI, trabajador.nombre, trabajador.departamento,
                    trabajador.cargo, trabajador.sueldo, trabajador.fechaIngreso);
        }
    }

    fclose(archivo);
    fclose(archivo_temporal);

    if (!encontrado) {
        printf("Trabajador no encontrado\n");
        remove("temp.txt");
    } else {
        remove("trabajadores.txt");
        rename("temp.txt", "trabajadores.txt");
    }
}


  void eliminarTrabajador(char CI[20]) {
     FILE *archivo, *archivoExTrabajadores, *archivoTemporal;
     archivo = fopen("trabajadores.txt", "r");
     archivoTemporal = fopen("temporal.txt", "w");
     archivoExTrabajadores = fopen("extrabajadores.txt", "a");
	 char motivo[15];
    if (archivo == NULL) {
        printf("Error al abrir el archivo de trabajadores.");
        exit(1);
    }

    if (archivoTemporal == NULL) {
        printf("Error al abrir el archivo temporal.");
        exit(1);
    }

    if (archivoExTrabajadores == NULL) {
        printf("Error al abrir el archivo de extrabajadores.");
        exit(1);
    }

    struct Trabajador trabajador;
    int encontrado = 0;

    while (fscanf(archivo, "%s %s %s %s %f %s", trabajador.CI, trabajador.nombre, trabajador.departamento,
                  trabajador.cargo, &trabajador.sueldo, trabajador.fechaIngreso) == 6) {
        if (strcmp(trabajador.CI, CI) == 0) {
            encontrado = 1;
            printf("Informacion del trabajador a eliminar:\n");
            printf("CI: %s\n", trabajador.CI);
            printf("Nombre: %s\n", trabajador.nombre);
            printf("Departamento: %s\n", trabajador.departamento);
            printf("Cargo: %s\n", trabajador.cargo);
            printf("Sueldo: %.2f\n", trabajador.sueldo);
            printf("Fecha de ingreso: %s\n", trabajador.fechaIngreso);
            printf("¿Esta seguro de eliminar al trabajador?\n(Si/No)=>  ");

            char respuesta[5];
            scanf("%s", respuesta);
            if (strcmp(respuesta, "Si") == 0) {

                
                printf("\n===Coloque el motivo de eliminacion===\n");
                printf("[I] Traslado\n");
                printf("[II] Renuncia\n");
                printf("[III] Despido\n");
                printf("[IV] Otro\n");
                printf("Indicando escrita la razon de la salida de el trabajador\n");
                printf("=>");
                scanf("%s", &motivo);

                time_t t = time(NULL);
                struct tm tm = *localtime(&t);
                fprintf(archivoExTrabajadores, "%s %s %s %s %.2f %s %s %d/%d/%d\n",
                        trabajador.CI, trabajador.nombre, trabajador.departamento,
                        trabajador.cargo, trabajador.sueldo, trabajador.fechaIngreso,
                        motivo, tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
                printf("Trabajador eliminado exitosamente.\n");
            } else {
                printf("Operacion cancelada.\n");
                fprintf(archivoTemporal, "%s %s %s %s %.2f %s\n",
                        trabajador.CI, trabajador.nombre, trabajador.departamento,
                        trabajador.cargo, trabajador.sueldo, trabajador.fechaIngreso);
            }
        } else {
            fprintf(archivoTemporal, "%s %s %s %s %.2f %s\n",
                    trabajador.CI, trabajador.nombre, trabajador.departamento,
                    trabajador.cargo, trabajador.sueldo, trabajador.fechaIngreso);
        }
    }

    if (!encontrado) {
        printf("No se encontro un trabajador con la CI ingresada.\n");
    } else {
        fclose(archivoTemporal);
        fclose(archivo);

        remove("trabajadores.txt");
       if (rename("temporal.txt", "trabajadores.txt") != 0){
            printf("Error al renombrar el archivo temporal.");
            exit(1);
       }

        printf("Trabajador eliminado exitosamente.\n");
    }

    fclose(archivoExTrabajadores);
}


  int main() {
     int opcion, n;
     char CI[20];
     int opcion_consulta;
     char departamento[20];
     char cargo[20];
     while (1) {
        printf("\n===Menu de opciones===\n");
        printf("\n[1] Ingresar\n");
        printf("\n[2] Consultar\n");
        printf("\n[3] Modificar\n");
        printf("\n[4] Eliminar\n");
        printf("\n[5] Salir\n");
        printf("\nSeleccione una opcion=> ");
        scanf("%d", &opcion);
        switch(opcion) {
            case 1:
                printf("Ingrese la cantidad de trabajadores a registrar: ");
                scanf("%d", &n);
                ingresarDatos(n);
                printf("Datos registrados exitosamente\n");
                break;
            case 2:
        printf("\n[1] Consultar por CI\n");
        printf("\n[2] Consultar por Departamento\n");
        printf("\n[3] Consultar por cargo\n");
        printf("\n[4] Consultar mayor y menor sueldo\n");
        printf("\n=>");
        scanf("%d", &opcion_consulta);

              switch(opcion_consulta) {
                case 1:
                    printf("Ingrese la cedula del trabajador a consultar: ");
                    scanf("%s", CI);
                    consulta_por_ci(CI);
                    break;
                  case 2:
                    printf("Ingrese el departamento a consultar: ");
                    scanf("%s", departamento);
                    consulta_por_departamento(departamento);
                    break;
                 case 3:
                    printf("Ingrese el cargo a consultar: ");
                    scanf("%s", cargo);
                    consulta_por_cargo(cargo);
                    break;
                 case 4:
                    trabajador_mayor_y_menor_sueldo();
                   break;
                 default:
                    printf("Opcion invalida\n");

                      }
                 break;


            case 3:
                printf("Ingrese la CI del trabajador a modificar: ");
                scanf("%s", CI);
                modificarDatos(CI);
	   printf("Datos modificados exitosamente\n");
              break;
            case 4:
                printf("Ingrese la CI del trabajador a eliminar: ");
                scanf("%s", CI);
                eliminarTrabajador(CI);
                break;
            case 5:
                printf("\nGracias por preferirnos\n");
                exit(0);
            default:
                printf("Opcion invalida\n");
        }
    }
    return 0;
}