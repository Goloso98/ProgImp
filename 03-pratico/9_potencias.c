#include <stdio.h>

/*
  Calcular as potências de um número.
*/

int power(int x, int n)
{
    int power = 1;
    for (int i = 1; n > 0 && i <= n; ++i)
    {
        power *= x;
    }
    return power;
}

int main(void)
{
    int base, exp;
    printf("Indique a base: ");
    scanf("%d", &base);
    printf("Indique o expoente: ");
    scanf("%d", &exp);
    printf("O valor de %d^%d=%d\n", base, exp, power(base, exp));
    return 0;
}