#include <stdio.h>

double raiz(double a, int i_max) //i_max = numero de iteracoes
{
  double x0, xn, xn1; //xn = x da iteracao anterior, xn1= iteracao atual

  x0 = a/2.0;
  xn = ((a/x0) + x0)*0.5;
  
  for (int i = 0; i < i_max; ++i)
    {
      xn1 = (((a/xn) + xn)*0.5);
      xn = xn1;
    }

  return xn1;

}

int main(void)
{
  double valor;
  
  printf("Introduza o valor: ");
  scanf("%lf", &valor);

  //sqrt = square root
  printf("sqrt(%lf) e aprx. %lf\n", valor, raiz(valor, 60));

  return 0;
}
