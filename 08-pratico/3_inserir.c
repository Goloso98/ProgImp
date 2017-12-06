#include <stdio.h>
#include <string.h>

void inserir(char str[], char ch)
{
  int i = strlen(str) -1;

  while(i>=0 && str[i] > ch)
  {
    str[i+1] = str[i];
    i--;
  }
  str[i+1] = ch;
}

int main(void)
{
  char str[] = { 'B', 'C' };
  char c = 'A';
  inserir(str, c);
}
