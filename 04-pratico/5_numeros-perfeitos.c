#include <stdio.h>

int perfeito(int n) 
{
  /*
    perfeito -> retorna 1
    se nao -> retorna 0
  */
  if (n==1) return 0;
  int sum = 0;
  for (int i = 1; i < n; ++i)
  {
    if(n%i == 0)
    {
      sum+=i;
    }
  }
  if (sum == n) return 1; else return 0;
}

int main(void)
{
  int num;
  printf("Qual o número a verificar? ");
  scanf("%d", &num);

  if (perfeito(num)) printf("O número %d é perfeito.\n", num);
  else printf("O número %d não é perfeito.\n", num);

  return 0;
}
