#include <stdio.h>
#include <ctype.h>
#include <string.h>

int todos_letras(char str[])
{
  int dim = strlen(str);

  for (int i = 0; i < dim; ++i)
  {
    if(!isalpha(str[i]))
      return 0;
  }

  return 1;
}

int main(void)
{
  char texto[] = {'T','e','s','t','e','\0'};

  if (todos_letras(texto))
    printf("tudo letras.\n");
  else
    printf("(nao) tudo letras.\n");
  return 0;
}