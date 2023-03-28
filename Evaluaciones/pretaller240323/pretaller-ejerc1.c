/*Desarrolle un programa en C que permita determinar si dos números
 * ingresados por teclado son amigos.
 * Dos números se consideran amigos si la suma de sus divisores es igual
 * al otro número, por ejemplo: 
 * Los números 220 y 284
 * 		220: 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 10 = 284
 * 		284: 1, 2, 4, 71, 142 = 220*/

#include<stdio.h>

int main()
{
    int i,j,n1,n2,d1,d2;
    int acum1=0, acum2=0;
    
    printf("\nIngrese un primer numero: ");
    scanf("%d", &n1);
    printf("\nIngrese un segundo numero: ");
    scanf("%d", &n2);
    
    for(i=1;i<n1;i++){
        d1=(n1%i);
        if(d1==0){
            acum1=acum1+i;
        }
    }
    
    for(j=1;j<n2;j++){
        d2=(n2%j);
        if(d2==0){
            acum2=acum2+j;
        }
    }
    
    if((acum1==n2)&&(acum2==n1)){
        printf("\nLos numeros ingresados son amigos\n");
    }else{
        printf("\nLos numeros ingresados no son amigos\n");
    }
    
    
    return 0;
}
