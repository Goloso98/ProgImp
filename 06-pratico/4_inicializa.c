#include <stdio.h>

void inicializa(int vec[], int size, int val)
{
  /* completar esta definição */
  for (int i = 0; i < size; ++i)
  {
    vec[i] = val;
  }
}

int main(void)
{
  int tamanho, valor, i = 0;
  printf("Tamanho do vetor: ");
  scanf("%d", &tamanho);
  printf("Preencher com o valor: ");
  scanf("%d", &valor);

  int vetor[tamanho];
  inicializa(vetor, tamanho, valor);

  printf("Vetor: {");
  for (i = 0; i < tamanho - 1; ++i)
  {
    printf("%d, ", vetor[i]);
  }
  printf("%d}\n", vetor[i]);
  return 0;
}
