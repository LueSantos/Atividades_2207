/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main() {

	int idade;
	int natal =1;
	int dias=365;
	int ano=1;

	printf("Informe a sua idade: ");
	scanf("%d",&idade);

	printf("Você viveu %d dias até hoje. \n",idade*dias);

	printf("Você comemorou %d natais até hoje.", idade*natal*ano);


	return 0;
}
