#include <stdio.h>

int main(void)
{
  int max = 0, valor;

  printf("Insira o número(0 para sair): ");
  scanf("%d", &valor);

  while(valor != 0)
    {
      if (valor > max)
	max = valor;

      printf("Insira o número(0 para sair): ");
      scanf("%d", &valor);
    }
  printf("O maior numero inserido foi %d.\n", max);

  return 0;
}
