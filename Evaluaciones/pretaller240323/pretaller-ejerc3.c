
/*“La empresa ToyLandia C.A. Para este primer semestre del año desea
 * otorgar un descuento especial a sus clientes del 50% del monto de la
 * factura mediante un concurso, que se basa en las siguientes reglas:
 * a) Compras mayores o iguales a 1000$ pero que no excedan de 5000$,
 * b) Los Productos en juego solo serán aquellos que tengan la etiqueta
 * color Morado(M) ó Amarillo(A).
 * c) La cantidad de productos comprados no debe ser menor de 3 articulos.
 * d) Si la cédula del cliente termina en un digito par.
 * Se le otorgara un 5% mas del descuento. Si termina en un numero impar
 * se le asignara solo un 3%.
 * e) Al monto de la factura mas alta se le otorgara una Gif de 300$
 * sobre su próxima compra.
 * 
 * Mostrar por pantalla el porcentaje de clientes ganadores del
 * descuento y la cantidad de ganadores de la GIF, y cuantos obtuvieron
 * el 5% y el 3%*/

#include<stdio.h>
#define DESC 0.5
#define DP 0.05
#define DI 0.03

int main(){
	
	int ci=0,dig=0,c=0,gifwin=0,descci5=0,descci3=0,winners=0,porcwin;
	int conttag=0,descprod=0,per=0,resp3;
	float precio,factura=0,total=0,t=0,nodesc=0,acumdesc=0;
	char resp1,resp2,tag;
	
do{
	
	do{
		printf("\nIngrese cedula: ");
		scanf("%d",&ci);
		per=per+1;
		dig=(ci%10);
		
		do{
			printf("\nPrecio del producto: ");
			scanf("%g",&precio);
			printf("Cantidad del producto: ");
			scanf("%d",&c);
			printf("Color de l etiqueta: ");
			scanf("%s",&tag);
			
			t=t+(c*precio);
			
			if((tag=='a')||(tag=='m')){
				conttag=conttag+1;
				acumdesc=acumdesc+t;
				t=0;
				descprod=descprod+c;
				}else{
					nodesc=nodesc+t;
					t=0;
				}
				
				printf("\nSu total a pagar es de %0.2f$",acumdesc+nodesc);
				printf("\n\nHay otro producto? \n\t S/N => ");
				scanf("%s",&resp1);
					
			}while(resp1=='s');
			
			if((acumdesc>=1000)&&(acumdesc<=5000)){
				if((conttag>0)&&(descprod>=3)){
					printf("\nFelicidades! Se le otorgara un descuento");
					winners=winners+1;
					if((dig%2)==0){
						factura=acumdesc;
						total=(acumdesc*(DESC+DP));
						factura=factura-total;
						printf("\n\tEl total a pagar con el descuento es de %0.2f$",factura+nodesc);
						descci5=descci5+1;
						total=0;
						conttag=0;
						}else{
							factura=acumdesc;
							total=(acumdesc*(DESC+DI));
							factura=factura-total;
							printf("\n\tEl total a pagar ahora, con el descuento, es de %0.2f$",factura+nodesc);
							descci3=descci3+1;
							total=0;
							conttag=0;
							}
					}
				
				if(factura>nodesc){
					printf("\n\n\tMuchas felicidades!!! \n\tAdemas del descuento, ha ganado una GIF de 300$ para sus proxima compra!");
					gifwin=gifwin+1;
					}
				}
				
				total=0;
				factura=0;
				nodesc=0;
				acumdesc=0;
				
				printf("\n\n\tHay otro cliente? \n\t S/N => ");
				scanf("%s",&resp2);
		
		}while(resp2=='s');
		
		porcwin=((winners*100)/per);
		
		printf("\n\nEl descuento del 50%% lo han ganado el %d%% de los clientes",porcwin);
		printf("\nLa GIF se la ganaron %d personas",gifwin);
		printf("\nEl descuento del 5%% se lo ganaron %d personas",descci5);
		printf("\nY el descuento del 3%% se lo ganaron %d personas\n\n",descci3);
	
	printf("\n\n\t==> Desea cerrar el programa? \n\n\tSi, cerrar programa (1) \n\n\tNo, ingresar mas clientes (2) \n\n\tRespuesta ==> ");
	scanf("%d",&resp3);
		
}while(resp3==2);
	
	return 0;
}
