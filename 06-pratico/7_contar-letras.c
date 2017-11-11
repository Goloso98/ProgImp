#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define N 100

/*void TudoMaiuscula(char str[],int size)
{
  //str[0] = "g";
  for (int i = 0; i < size; ++i)
    str[i] = toupper(str[i]);

  char c;
  for (int i = 0; i < size; ++i)
  {
    c = str[i];
    c = toupper(c);
    str[i] = c;
  }
}*/

void ContarLetras(char str[], int size)
{
  int Alpha_contador[26];
  char Alpha[26];
  for(int i = 0; i < 26; i++) //A = 65 Z = 90
  {
    //preencher Alpha de A a Z
    Alpha[i] = 65 + i;
  }

  for (int letra = 0; letra < 26; ++letra) //para cada letra em Alpha
  {
    int n = 0; //contar as vezes que aparece
    for (int ii = 0; ii < size; ++ii) //para cada letra da string
    {
      if(Alpha[letra] == str[ii])
        n++;
    }
    Alpha_contador[letra] = n;
  }

  for (int i = 0; i < 26; ++i)
  {
    if(i % 5 == 0)
      printf("\n");
    printf("%c: %d\t", Alpha[i], Alpha_contador[i]);
  }
  printf("\n");
}

/*int main(int argc, char const *argv[])
{
  char * var = "olaa";
  printf("%ld\n", strlen(var));
  TudoMaiuscula(var, strlen(var));
  printf("%c\n", var[0]);
  return 0;
}*/

int main(void)
{
  /* tirar comentario para exprimentar
  char texto[N];
  int c = 0;

  while((texto[c]=toupper(getchar())) != EOF) //termina com control+D
    c++;

  ContarLetras(texto, c-1);
  */

  return 0;
}