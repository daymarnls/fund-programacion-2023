
/*Desarrollar un programa en C que permita dado n numeros ingresados
 * por teclado realizar las siguientes validaciones:
 * a) Si el numero ingresado por teclado tiene mas de 3 dígitos
 * mostrar por pantalla la cifra invertida:
 * 	Ejm: 345 → 543
 * b) Mostrar por pantalla la cantidad de veces que el usuario ingreso
 * el nro 3 y el nro 5*/

#include <stdio.h>

int main(){

    int n,m,i,aux1;
    int cont3=0,cont5=0;
    
    printf("\nCantidad de numeros que quiere ingresar: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        do{
        printf("\nFavor ingresar un numero entero positivo: ");
        scanf("%d",&m);
        }while(m<0);
        
        if(m>99){
            printf("\nEl numero invertido es => ");
            
            do{
                aux1=(m%10);
                m=(m/10);
                printf("%d",aux1);
            
                if(aux1==3){
                    cont3=cont3+1;
            }else{
                    if(aux1==5){
                        cont5=cont5+1;
                    }}
            }while(m!=0);
            printf("\n* Usted ha ingresado %d nros 3",cont3);
            printf("\n* Usted ha ingresado %d nros 5\n",cont5);
            cont3=0;
            cont5=0;
        }else{
            do{
                aux1=(m%10);
                m=(m/10);
                if(aux1==3){
                    cont3=cont3+1;
                }else{
                    if(aux1==5){
                        cont5=(cont5+1);
                    }}
            }while(m!=0);
            printf("\n* Usted ha ingresado %d nros 3",cont3);
            printf("\n* Usted ha ingresado %d nros 5\n",cont5);
            cont3=0;
            cont5=0;
        }
    
    }

return 0;
}
