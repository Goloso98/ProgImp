#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, j, k;

  /*A)*/
  i = 10;
  j = 5;

  printf("a) %d\n\n", !i < j);

  /*B)*/
  i = 2;
  j = 1;

  printf("b) %d\n\n", !!i + !j);

  /*C)*/
  i = 5;
  j = 0;
  k = -5;

  printf("c) %d\n\n", i && j || k);

  /*D)*/
  i = 1;
  j = 2;
  k = 3;

  printf("d) %d\n\n", i < j || k);

  /*E)*/
  i = 3;
  j = 4;
  k = 5;

  printf("e) %d\n", i < j || ++j < k);
  printf("   %d %d %d\n\n", i, j, k);

  /*F)*/
  i = 7;
  j = 8;
  k = 5;

  printf("f) %d\n", i - 7 && j++ < k);
  printf("   %d %d %d\n", i, j, k);

  return 0;
}