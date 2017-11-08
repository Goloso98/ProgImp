#include<stdio.h>

/*
Calcula a mediana de a, b, c e retorna-a.
*/

int mediana(int a, int b, int c)
{	
	int t;
	while (!(a <= b && b <= c))
	{
		if (b>c) {
			t = b;
			b = c;
			c = t;
		};
		if (a>b) {
			t = a;
			a = b;
			b = t;
		};

	};

	return b;
}

int main(void)
{
	int n1, n2, n3;
	printf("Insira os números\nPrimeiro número: ");
	scanf("%d", &n1);
	printf("Segundo número: ");
	scanf("%d", &n2);
	printf("Terçeiro número: ");
	scanf("%d", &n3);
	printf("A mediana dos números é %d.\n", mediana(n1, n2, n3));
	return 0;
}