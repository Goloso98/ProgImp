#include <stdio.h>

double serie_log(double x, int n);

int main(void)
{
    double x;
    int n;

    printf("log(1 + <x>: ");
    scanf("%lf", &x);
    printf("com aproximacao a <n> iteracoes: " );
    scanf("%d", &n);

    printf("\nlog(1 + %lf) = %lf\n", x, serie_log(x, n));
    return 0;
}

double serie_log(double x, int n)
{
    double total = 0, soma_interna = 0, potencias = 1;
    int count = 1;

    for (count; count < n+1; ++count)
    {
        potencias *= x;
        soma_interna = potencias / count;

        if (count % 2 == 0)
        {
            /* sinal negativo */
            //printf("\nsoma_interna: %lf -> ", soma_interna);
            soma_interna *= -1;
            //printf("%lf\n", soma_interna);
        }

        total += soma_interna;

        //printf("\nCiclo\tSoma_interna\ttotal\n%d\t%lf\t%lf\n\n", count, soma_interna, total);
        //printf("\nCiclo\tpow\tsoma_interna\ttotal");
        //printf("\n%d\t%d\t%lf\t%lf\n\n", count, potencias, soma_interna, total);
    }

    return total;
}