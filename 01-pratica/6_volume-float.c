#include <stdio.h>

int main(void)
{
  float l, w, h;

  printf("L: ");
  scanf("%f", &l);
  printf("W: ");
  scanf("%f", &w);
  printf("H: ");
  scanf("%f", &h);

  printf("\n");
  printf("O volume e: %f.\n", l*w*h);
  return 0;
}