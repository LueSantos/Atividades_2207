/*
 ============================================================================

3. Fazer um programa que solicita um número decimal e imprime o
correspondente em hexa e octal.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
    int num; // 'num' variable to hold decimal number
    char hex_arr[100]; // array to hold Hexadecimal value
    int i=0; // counter to iterate/index array elements

    printf("Digite um valor decimal: ");
    scanf("%d", &num); // Read number into 'num'

    while(num){ // loop until num isn't 0
      int temp = num%16; // num%16 will give single digit of hex

      if(temp<10)
        hex_arr[i] = '0' + temp;
      else
        hex_arr[i] = 'A' + (temp-10);

      num = num/16; // divide num by 16 to get next digit of Hexadecimal
      i++;  // increment conuter to hold in next array element
    }

    printf("O valor em Hexadecimal é: ");
    while(i--){ // iterate over array from large index to 0
      printf("%c", hex_arr[i]); // print individual hex digits
    }
    return 0;
}
*/


int main()
{
    int num; // 'num' variable to hold decimal number
    int oct_arr[100]; // array to hold octal value
    int i=0; // counter to iterate/index array elements

    printf("Enter decimal number: ");
    scanf("%d", &num); // Read number into 'num'

    while(num){ // loop until num isn't 0
      oct_arr[i] = num%8; // num%8 will give single digit of octal

      num = num/8; // divide num by 8 to get next digit of octal

      i++;  // increment countr to hold in next array element
    }

    printf(" O valor em Octal: ");
    while(i--){ // iterate over array from large index to 0
      printf("%d", oct_arr[i]); // print individual octal digits
    }
    return 0;
}
