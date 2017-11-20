#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void capitalizar(char str[])
{
  int i = 0;

  while (str[i])
  {
    str[i] = toupper(str[i]);
    i++;
  }
}

int main(void)
{
  int i = 0;
  char texto[] = {'O','l','a','\0'}; //texto teste
  capitalizar(texto);

  while(texto[i])
  {
    printf("%c", texto[i]);
    i++;
  }
  printf("\n");

  return 0;
}