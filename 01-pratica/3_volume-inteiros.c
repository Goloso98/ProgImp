#include <stdio.h>

int main(void)
{
  int l, w, h;

  printf("L: ");
  scanf("%d", &l);
  printf("W: ");
  scanf("%d", &w);
  printf("H: ");
  scanf("%d", &h);

  printf("\n");
  printf("O volume e: %d.\n", l*w*h);
  return 0;
}