#include <stdio.h>
#include <string.h>

int decimal(char str[])
{
  int dim = strlen(str);
  int numero = 0;
  int x10 = 1;

  for (int i = dim-1; i >= 0; --i)
  {
    int n = str[i] - '0';
    numero += n * x10;
    x10 *= 10;
  }

  return numero;
}

int main(void)
{
  printf("%d\n", decimal("0")); //mudar para exprimentar outros
  return 0;
}
