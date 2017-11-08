#include <stdio.h>

/*
Calcular o volume de um cubo de lado dado.
*/

int cubo(int lado)
{
	return lado * lado * lado;
}

int main(void)
{
	int lado;
	printf("Qual o lado? ");
	scanf("%d", &lado);
	printf("O volume do cubo de lado %d é %d\n", lado, cubo(2));
	return 0;
}

