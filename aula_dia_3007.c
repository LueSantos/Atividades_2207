/*
 ============================================================================
 Name        : aula_dia_3007.c
 Author      : Luciana Santos
 Version     :
 Copyright   : Consumo de gasolina
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/* Faca um programa em C que o usuário digite o numero de quilometros,
a quantidade de litros de gasolina que o carro usou para rodar esse número de quilometros.
Em posse desses dois dados calcule o consumo em km/L que o carro tem.
Esse programa deve rodar sem parar, nao ter fim. Mande o link para o GITHUB com o seu programa la.
Seu e-mail será registrado quando você enviar este formulário. */

#include <stdio.h>
#include <stdlib.h>


float resultado (float a, float b)
{
	return (a / b);
}

	float KM, Litros;
	float TRUE = 1;



int	main(){

	do{

	printf("Digite a quilometragem rodada KM: ", "KM");
		scanf("%f", &KM);

	printf("Digite a quantidade de combustível em Litros:  ");
		scanf("%f",&Litros);


	printf("O consumo em KM/L é de: %.2f \n",KM/Litros,resultado);

	}while(TRUE);


return 0;
}

