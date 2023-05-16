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
        factura=0;
        total=0;
        f=0;

        printf("\nNuevo cliente");
        contp=contp+1;
        printf("\nCuanto tiempo lleva como comprador? \n\t=> ");
        scanf("%d",&years);

        printf("\nQue desea comprar? \n\tMallas para Beisbol => 1 \n\tMallas para Tennis => 2");
        printf("\n\t\t==> ");
        scanf("%d",&comp);
        printf("\nCuantos metros va ha llevar? \n\t==> ");
        scanf("%d",&m);

        if(comp==1){
            contb=contb+1;
            factura=m*PMB;
            if(years>5){
                contpdesc_b=contpdesc_b+1;
                total=factura*DB;
                factura=factura-total;
            } 
        }else{
            contt=contt+1;
            factura=m*PMT;
            if(years>5){
                contpdesc_t=contpdesc_t+1;
                total=factura*DT;
                factura=factura-total;
            }
        }

        if(years>15){
            f=factura*DA;
            factura=factura-f;
        }

        printf("El descuento fue de %0.2f",total+f);
        printf("\nSe debe pagar %0.2f\n",factura);
        
        printf("\n\nHay otro cliente? \n\t[1] SI \n\t[2] NO \n\tSu respuesta ==> ");
        scanf("%d",&resp);
        
    }while(resp==1);

    if(contb>contt){
        printf("\nEntre los dos tipos de mallas, se vendieron mas mallas para beisbol, con un total de %d",contb);
    }else{
        if(contt>contb){
            printf("\nEntre los dos tipos de mallas, se vendieron mas mallas para tennis, con un total de %d",contt);
        }else{
            printf("\nEntre los dos tipos de mallas, ambas se vendieron por partes iguales. \n==> Mallas para Beisbol %d \n==> Mallas para Tennis %d",contb,contt);
        }
    }

    printf("\n\nEl descuento en mallas de Beisbol lo obtuvieron %d personas",contpdesc_b);
    printf("\n\nEl descuento en mallas de Tennis lo obtuvieron %d personas",contpdesc_t);

    return 0;
}