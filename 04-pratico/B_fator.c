#include <stdio.h>
#define TRUE 1
#define FALSE 0

int func_prim(int n)
{
  int d;
  if(n <= 1) return FALSE;
  for (d = 2; d*d <= n; d++) {
    if (n%d == 0)
      return FALSE;
    }
  return TRUE;
}

int prox_prim(int numero)
{
  do
  {
    numero++;
  } while(!func_prim(numero));
  return numero;
}

int main(void)
{
  int num, primo;  
  printf("Numero a fatorizar: ");
  scanf("%d", &num);

  if(num <= 0)
  {
    printf("Numero menor que 1...\n");
    return 0;
  }
  else if (num == 1)
    printf("1 : 1\n");
  else
  {
    primo = 2;
    printf("%d : ", num);


    while(num > 1)
    {
      while(num % primo != 0 ) //tenta primos ate ser divisivel
        primo = prox_prim(primo);
      printf("%d", primo);
      num /= primo;
      if (num != 1)
        printf(" x "); //fancy
    }
    printf("\n");
  }
  return 0;
}