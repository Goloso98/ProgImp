#include <stdio.h>

double serie_atan(double x, int n)
{
	double numerador = x, denominador, divisao, sum = 0, x_x = x*x;
	
	for (int i = 0; i < n; i++)
	{
		denominador = 2 * i + 1;
		divisao = numerador / denominador;
		if(i % 2 != 0)
			divisao *= -1;
		sum += divisao;
		numerador *= x_x;
	}
	
	return sum;
}

int main(void)
{
	double x;
	int n;
	
	printf("Serie arctan(x)\n");
	printf("Indique o x: ");
	scanf("%lf", &x);
	printf("Indique vezes a calcular a serie: ");
	scanf("%d", &n);
	
	printf("A aproximacao de arctan(%lf) = %lf!\n", x, serie_atan(x, n));
	
	return 0;
}
