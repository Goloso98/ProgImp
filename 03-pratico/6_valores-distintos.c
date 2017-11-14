#include <stdio.h>

int main(void)
{
  int v1, v2, v3, distintos;
  distintos = 0;

  printf("Primeiro valor: ");
  scanf("%d", &v1);
  printf("Segundo valor: ");
  scanf("%d", &v2);
  printf("Terceiro valor: ");
  scanf("%d", &v3);

  if (v1 != v2)
    distintos++;
  if (v1 != v3)
    distintos++;
  if (v2 != v3)
    distintos++;

  printf("\n");
  printf("Resposta: %d valores distintos.\n", distintos);

  return 0;
}