#include <stdio.h>

/*
  Calcular pŕoximo ano bissexto.
*/

int prox_bissexto(int n) 
{
  while ( !(( n % 4 == 0 && n % 100 != 0 ) || n % 400 == 0 )) n++; //soma 1 ao ano ate ser bissexto
  
   return n;
}

int main(void)
{
	int ano;
	printf("Insira o ano: ");
	scanf("%d", &ano);
	printf("O pŕoximo ano bissexto é %d\n", prox_bissexto(ano));
	return 0;
}
