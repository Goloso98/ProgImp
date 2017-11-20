#include <stdio.h>
#include <string.h>

int scrabble(char str[])
{
  int dim = strlen(str);
  int pontos = 0;
  char c;

  for (int i = 0; i < dim; ++i)
  {
    c = str[i];
    switch(c)
    {
      case 'D':
      case 'G': pontos += 2;
        break;

      case 'B':
      case 'C':
      case 'M':
      case 'P': pontos += 3;
        break;

      case 'F':
      case 'H':
      case 'V':
      case 'W':
      case 'Y': pontos += 4;
        break;

      case 'K': pontos += 5;
        break;

      case 'J':
      case 'X': pontos += 8;
        break;

      case 'Q':
      case 'Z': pontos += 10;
        break;

      default: pontos += 1; //A E I L N O R T S U
    }
  }
  return pontos;
}

int main(void)
{
  char palavra[] = "PITFALL"; //alterar para exprimentar
  printf("%s, vale %d pontos.\n", palavra, scrabble(palavra));
  return 0;
}