/*
 ============================================================================
 Name        : Atividades_2207_1.c
 Author      : Luciana Santos
 Copyright   : Atividade 3
3. Fazer um programa que solicita um número decimal e imprime o
correspondente em hexa e octal.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int l;

	printf("Digite o valor em decimal a ser convertido: ");
	scanf("%d",&l);

	printf("\n");

	printf("O valor de %d foi convertido em Octal para: %o\n\n", l,l);
	printf("O valor de %d foi convertido em Hexdecimal para: %x\n\n", l,l);


	return 0;
}
