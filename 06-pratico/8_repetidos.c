#include <stdio.h>

#define MAX 100

int repetidos(int vec[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    for (int ii = i+1; ii < size; ++ii)
    {
      if (vec[i] == vec[ii])
        return 1;
      }
    }
  return 0;
}

int main(void)
{
  int valor_lido[MAX], i = 0;
  
  printf("Indique os valores(termina com 0 ou maximo de 100 valores):\n");
  scanf("%d", &valor_lido[i]);
  while (valor_lido[i] && i < MAX)
  {
    i++;
    scanf("%d", &valor_lido[i]);
  }

  if(repetidos(valor_lido, i))
  {
    printf("Existem valores repetidos.\n");
  }
  else
  {
    printf("Nao existem valores repetidos.\n");
  }
  
  return 0;
}
