#include <stdio.h>

#define MAX 100

int ocorre(int vec[], int size, int val)
{
  for (int i = 0; i < size; ++i)
  {
    if (vec[i] == val)
    {
      return 1;
    }
  }
  return 0;
}

int main(void)
{
  int valor_lido[MAX], i = 0, numero;
  
  printf("Indique os valores(termina com 0 ou maximo de 100 valores):\n");
  scanf("%d", &valor_lido[i]);
  while (valor_lido[i] && i < MAX)
  {
    i++;
    scanf("%d", &valor_lido[i]);
  }

  printf("Qual o numero a procurar: ");
  scanf("%d", &numero);

  if (ocorre(valor_lido, i, numero))
  {
    printf("Existe pelo menos um %d no vetor.\n", numero);
  }
  else
  {
    printf("Nao existe '%d' no vetor.\n", numero);
  }

  return 0;
}
