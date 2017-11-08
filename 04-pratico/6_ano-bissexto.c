#include <stdio.h>

/*
  Calculo se ano é bissexto ou comum.
*/

int bissexto(int ano)
{
	if ( ( ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0 )
	{
		return 1;
	} else {
		return 0;
	}
}

int main(void)
{
	int ano;
	printf("Qual o ano?: ");
	scanf("%d", &ano);
	if (bissexto(ano))
	{
		printf("O ano %d é bissexto.\n", ano);
	} else {
		printf("O ano %d é comum.\n", ano);
	}
}
