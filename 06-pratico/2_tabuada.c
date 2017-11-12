#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define count 10

int main(void)
{
  int certas = 0, erradas = 0;

  for (int i = 0; i < count; ++i)
  {
    srand((unsigned)time(NULL));

    int a, b, user, result; //valores entre [1, 9]
    a = 1 + rand() / ((RAND_MAX / 9 - 1 + 1) + 1);
    b = 1 + rand() / ((RAND_MAX / 9 - 1 + 1) + 1);
    result = a * b;

    printf("Quanto é %d x %d?: ", a, b);
    scanf("%d", &user);

    if(result == user) //certo
    {
      certas++;
      printf("Certo!");
    }
    else
    {
      erradas++;
      printf("Errado! O resultado é %d.", result);
    }

    printf("\n");
  }
  printf("Certas: %d\tErradas: %d\n", certas, erradas);
  return 0;
}