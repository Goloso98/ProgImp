#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int pontua(char c)
{
  switch(c)
  {
    case 'D':
    case 'G': return 2;

    case 'B':
    case 'C':
    case 'M':
    case 'P': return 3;

    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y': return 4;

    case 'K': return 5;

    case 'J':
    case 'X': return 8;

    case 'Q':
    case 'Z': return 10;

    default: return 1; //A E I L N O R T S U
  }
}

int main(void)
{
  char ch;
  int pontos = 0;

  while((ch = toupper(getchar())) != '\n')
  {
    pontos += pontua(ch);
  }

  printf("Fez %d pontos.\n", pontos);

  return 0;
}