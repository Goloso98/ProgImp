#include <stdio.h>
#include <ctype.h>
#include <string.h>

int algum_digito(char str[])
{
  int dim = strlen(str);

  for (int i = 0; i < dim; ++i)
  {
    if (isdigit(str[i]))
      return 1;
  }

  return 0;
}

int main(void)
{
  char texto[] = {'1','T','e','s','t','e','\0'}; //editar para exprimentar 

  if (algum_digito(texto))
    printf("tem numeros.\n");
  else
    printf("nao tem numeros.\n");
  return 0;
}