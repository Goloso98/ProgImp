#include <stdio.h>

int main(void)
{
  int l1, l2, l3;

  printf("Primeiro lado: ");
  scanf("%d", &l1);
  printf("Segundo lado: ");
  scanf("%d", &l2);
  printf("Terceiro lado: ");
  scanf("%d", &l3);

  if (l1 == l2 && l2 == l3)
    printf("Triangulo equilatero.\n");
  else if (l1 != l2 && l1 != l3 && l2 != l3)
    printf("Triangulo escaleno.\n");
  else
    printf("Triangulo isosceles.\n");

  return 0;
}