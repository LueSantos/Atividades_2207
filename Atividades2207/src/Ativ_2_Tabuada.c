#include <stdio.h>  
/*

Atividade prosposta no dia: 23/07/2021;

>> 2. Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9; <<

*/

int num;
int contador=0; 

int main()
{
    
    printf("Digite o número da Tabuada:  ");
    scanf("%d", &num);
    
    for(contador =1; contador <=9; contador++){
        printf("%d x %d = %d\n", num, contador, num * contador);
    }
    
    
    
    return 0;
}