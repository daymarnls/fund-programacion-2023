/*Utilanzo funciones par hacer una calculadora con las operaciones basicas*/

#include<stdio.h>

int Suma (int a, int b);           //funciones a utilizar
int Resta(int a, int b);
int Multiplicacion(int a, int b);
float Division (int a, int b);
void menuSelec();


int main(){

    menuSelec();  //llamado a la funcion menú

    printf("\n\nHasta la proxima! :]\n");
}

//declaracion de las funciones para las operaciones
int Suma (int a, int b){
    int sum;

    sum=a+b;
    return sum;
}

int Resta(int a, int b){
    int rest;

    rest=a-b;
    return rest;
}

int Multiplicacion(int a, int b){
    int mult;
    
    mult=a*b;
    return mult;
}

float Division (int a, int b){
    float divi;
    
    divi=a/b;
    return divi;
}

//declaracion para la funcion principal menú
void menuSelec(){

    int resp,x,h;

        printf("\n**** Bienvenido a la Calculadora :] ***\n\n");
        printf("Que operacion desea ejecutar \n\n==>[1]Suma \n\n==>[2]Resta \n\n==>[3]Multiplicacion \n\n==>[4]Division");
        printf("\n\nRespuesta ====> ");
        scanf("%d",&resp);

        switch (resp){   //seleccion para las operaciones disponibles
            case 1:
                printf("\n\nIngrese el primer numero a operar (x): ");
                scanf("%d",&x);
                printf("\nIngrese el segundo numero a operar (h): ");
                scanf("%d",&h);
                printf("\nLa suma de X y H es = %d",Suma(x,h));
                break;

            case 2:
                printf("\n\nIngrese el primer numero a operar (x): ");
                scanf("%d",&x);
                printf("\nIngrese el segundo numero a operar (h): ");
                scanf("%d",&h);
                printf("\nLa resta de X y H es = %d",Resta(x,h));
                break;

            case 3:
                printf("\n\nIngrese el primer numero a operar (x): ");
                scanf("%d",&x);
                printf("\nIngrese el segundo numero a operar (h): ");
                scanf("%d",&h);
                printf("\nLa multiplicacion de X y H es = %d",Multiplicacion(x,h));
                break;

            case 4:
                printf("\n\nIngrese el primer numero a operar (x): ");
                scanf("%d",&x);
                printf("\nIngrese el segundo numero a operar (h): ");
                scanf("%d",&h);
                if((h>0)||(h<0)){   //condicional para evitar que el denominado sea 0
                    printf("\nLa division (sin decimales) de X y H es = %.f",Division(x,h));
                }else{
                    printf("\n\t===> MATH ERROR \n(El denominador (h) no puede ser 0)");
                }
                break;

            default:   //en caso de que se ingrese un numero que no corresponda a alguna opcion
                printf("\n\t==> Usted ha ingresado una opcion invalida del menu :]");
                break;

        }    
}
