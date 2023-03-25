
/*Suponiendo que el kilo de azúcar y de café están a 3$ y 0.72$ respectivamente, escribir
en lenguaje C un programa que:
* 1º) Pida por teclado una cantidad (dato real) en euros.
* 2º) Si la mitad de la cantidad introducida se destina a comprar azúcar, una tercera parte a comprar
café, y el resto no se gasta. Calcule cuántos kilos de azúcar y café (datos reales) se pueden comprar
con dicha cantidad de dinero, así como la cantidad (dato real) de dinero sobrante.
* 3º) Muestre por pantalla los resultados (datos reales).
* 
*  Nota: 1 euro = 166,386 dolares.*/

#include <stdio.h>
#define D 166.386
#define p_azucar 3
#define p_cafe 0.72

int main(){
	
	float e, dl, s, t_kc, m_ka, se;
	int ka, kc;
	
	printf("\nIngrese la cantidad de euros con la que se va a comprar: ");
	scanf("%g", &e);
	
	dl=(e*D);
	m_ka=(dl/2);
	t_kc=(dl/3);
	s=(dl-(m_ka+t_kc));
	ka=(m_ka/p_azucar);
	kc=(t_kc/p_cafe);
	se=(s/D);
	
	printf("\nLa conversion fue de %0.2f dolares", dl);
	printf("\nLa mitad del dinero (%0.2f dolares), permite comprar %d kilos de azucar", m_ka, ka);
	printf("\nY la tercera parte del dinero (%0.2f dolares), permite comprar %d kilos de cafe", t_kc, kc);
	printf("\n\t=> Sobro un total de %0.2f dolares (%0.2f euros)\n\n", s, se);
	
	
	
	
	return 0;
	
}
