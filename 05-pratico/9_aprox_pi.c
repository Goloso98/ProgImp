#include <stdio.h>
#include <math.h>

double aprox_pi(int n)
{
  double  sum = 0, divisao;
  int i, numerador = -1, denominador;
  
  for(i = 0; i < n; i++)
    {
      numerador *= -1;
      denominador = (2*i) + 1;
      
      divisao = (double)(numerador) / (double)(denominador);
      
      sum += divisao;
      
    }
  
  return 4 * sum;
}

int main(void)
{
  int n_aprox;
  double result;
  printf("Numero de termos da serie: ");
  scanf("%d", &n_aprox);
  
  result = aprox_pi(n_aprox);
  printf("\nNumero de pi calculado:    %lf\nNumero de pi da libraria:  %lf\n", result, M_PI);
  return 0;
}


