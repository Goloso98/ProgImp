#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TRUE 1
#define FALSE 0
#define MAX 64

int forte(char str[])
{
  int dim, n_digit, n_lower, n_upper;

  dim = strlen(str);

  if (dim < 6)
    return 0;

  n_digit = 0;
  n_lower = 0;
  n_upper = 0;
  
  for (int i = 0; i < dim; ++i)
  {
    if (str[i] >= '0' && str[i] <= '9')
      n_digit++;

    if (str[i] >= 'A' && str[i] <= 'Z')
      n_lower++;

    if (str[i] >= 'a' && str[i] <= 'z')
      n_upper++;

    if (n_digit > 0 && n_upper > 0 && n_lower > 0)
      return TRUE;
  }

  return FALSE;
}

/*
----------------------------------------------------------
So para testes
| | | | |
| | | | |
V V V V V
----------------------------------------------------------
*/

int main(void)
{
  char pass[MAX];
  int dim;
  char rnd;

  srand((unsigned)time(NULL));

  dim = 1 + (rand() / (RAND_MAX / MAX));

  for (int i = 0; i < dim; ++i)
  {
    do //ascii entre [0-9A-Za-z]
    {
     rnd = '0' + (rand() / (RAND_MAX / ('z' - '0') + 1));
    } while (!((rnd >= '0' && rnd <= '9') || (rnd >= 'A' && rnd <= 'Z') || (rnd >= 'a' && rnd <= 'z'))); //remover carateres extra entre [0-z]

    pass[i] = rnd;
  }

  pass[dim] = '\0';

  printf("A pass \"");
  for (int i = 0; i < dim; ++i)
    {
      putchar(pass[i]);
    }
  if(forte(pass))
    printf("\" e forte.\n");
  else
    printf("\" e fraca.\n");

  return 0;
}
