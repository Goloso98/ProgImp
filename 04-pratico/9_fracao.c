#include <stdio.h>

int mdc(int a, int b)
{
    int r;
    while(b != 0) {
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main(void)
{
  int numerador, denominador, mdcomum;

  printf("Numerador: ");
  scanf("%d", &numerador);

  printf("Denominador: ");
  scanf("%d", &denominador);

  mdcomum = mdc(numerador, denominador);

  printf("A fracao %d/%d e equivalente a %d/%d\n", numerador, denominador, numerador/mdcomum, denominador/mdcomum);

  return 0;
}
