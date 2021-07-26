/******************************************************************************

  1. Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.


*******************************************************************************/
#include <stdio.h>


int main()
{
	float metro;

	printf(" Digite um valor em metro:  \n");
	scanf("%f",&metro);

	printf("%.2f metro(s) é equivalente a %.2f decimetro.\n",metro,metro*10);

	printf("%.2f metro(s) é equivalente a %.2f centimetro.\n",metro,metro*100);

	printf("%.2f metro(s) é equivalente a %.2f milimetro.\n",metro,metro*1000);

	return 0;
	
}
