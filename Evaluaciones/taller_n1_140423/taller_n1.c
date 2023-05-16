/*La empresa TuMalla.com es fabricante de todo tipo de mallas deportivas, entre sus productos estrellas
se encuentran las mallas de tennis y las mallas de beisbol. La gerencia requiere controlar las ventas por día,
de acuerdo a las siguientes politicas:
1. Si el cliente tiene más de 5 años como comprador de mallas para beisbol, tendrá un descuento del 8%
2. Si el comprador es de mallas para tennis, tendrá un descuento del 6%
3. El cliente que tenga un tiempo menor o igual a 5 años, no tendrá descuento
4. Si el cliente tiene más de 15 años, tendrá un descuento del 30%

El costo de las mallas para beisbol son de 50$ el metro, y el costo de las mallas par tennis es de 80$ el metro

Determinar:
1. El costo de la compra por cliente
2. EL ingreso recibido por la empresa
3. La cantidad de mallas para beisbol vendidas 
4. La cantidad de mallas para tennis vendidas
5. Cual de las dos mallas se vendió más
6. Total de clientes que obtuvieron el descuento
7. Cantidad total de descuento
8. Total de compra*/


#include<stdio.h>
#define DB 0.08
#define DT 0.06
#define DA 0.3
#define PMB 50
#define PMT 80


int main(){

    int comp,years,m;
    int contt=0,contb=0,contp=0,contpdesc_b=0,contpdesc_t=0;
    float factura,f=0,total;
    int resp;


    printf("\t\t**Bienvenido a TuMalla.com**\n");

    do{
        printf("\nNuevo cliente");
        contp=contp+1;
        printf("\nCuanto tiempo lleva como comprador? \n\t=> ");
        scanf("%d",&years);

        printf("\n")





    }while(resp==1);







    return 0;
}