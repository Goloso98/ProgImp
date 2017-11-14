#include <stdio.h>

int main(void)
{
  int v1, v2, v3, max, min, amp;

  printf("Primeiro valor: ");
  scanf("%d", &v1);
  printf("Segundo valor: ");
  scanf("%d", &v2);
  printf("Terceiro valor: ");
  scanf("%d", &v3);

  max = v1;
  if (v2 > max)
    max = v2;
  if (v3 > max)
    max = v3;

  min = v1;
  if (min > v2)
    min = v2;
  if (min > v3)
    min = v3;

  printf("\n");
  printf("Valor maximo: %d\n", max);
  printf("Valor minimo: %d\n", min);
  printf("Amplitude:    %d\n", max - min);

  return 0;
}