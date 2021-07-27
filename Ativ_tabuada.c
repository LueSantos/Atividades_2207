/*
 ============================================================================
 Name        : Ativ_tabuada.c
 Author      : Luciana Santos

2. Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9

 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{

int num, tab = 9;

    for(num =1; num <=9; num++){
        printf("%d x %d = %d\n", num, tab, num * tab);
    }



    return 0;
}
