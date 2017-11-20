#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 20

int calc(char str[])
{
  int a = str[0] - '0';
  int b = str[2] - '0';

  switch (str[1])
  {
    case '+': return a+b;
    case '-': return a-b;
    case '*': return a*b;
  }
}

int main(void)
{
  char conta[3];
  srand((unsigned)time(NULL));
  int rnd;

  for (int i = 0; i < N; i++)
  {
    conta[0] = (rand() / (RAND_MAX / 10)) + '0';
    conta[2] = (rand() / (RAND_MAX / 10)) + '0';

    rnd = rand() / (RAND_MAX / 3);
    if(rnd == 0)
      conta[1] = '+';
    else if(rnd == 1)
      conta[1] = '-';
    else
      conta[1] = '*';

    printf("%c%c%c = %d\n", conta[0], conta[1], conta[2], calc(conta));
  }
  return 0;
}