#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int tentativas = 1, rnd, user;
  srand((unsigned)time(NULL));
  rnd = 1 + rand() / (RAND_MAX / (1000 - 1 + 1) + 1);

  printf("Adivinha o numero entre 1 e 1000.\nTente a sorte: ");

  scanf("%d", &user);
  while(user != rnd)
  {
    tentativas++;
    if (user < rnd)
      printf("Demasiado baixo!: \n");
    if (user > rnd)
      printf("Demasiado alto!: \n");
    scanf("%d", &user);
  }

  printf("Acertou em %d tentativas!\n", tentativas);

  return 0;
}

/*
resposta ao exercicio 

---------------------

min+((max-min)/2)

max tentativas = 10

exemplo:

$500 --input
>baixo --output
[501, 1000] --intervalo possivel do numero

$750
>baixo
[751, 1000]

$875
>baixo
[876, 1000]

$938
>baixo
[939, 1000]

$970
>baixo
[971, 1000]

$985
>baixo
[986, 1000]

$993
>alto
[986, 993]

$989
>alto
[986, 989]

$987
>baixo
{988}
*/