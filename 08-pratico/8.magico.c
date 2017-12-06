#include <stdio.h>

int magico(int a[20][20], int n)
{
  int parse_sum, sum = 0;
  for(int i = 0; i < n; i++) //verificar 1ª linha
    {
      sum += a[0][i];
    }

  for(int i = 1; i < n; i++) //soma linha a linha
    {
      parse_sum = 0;
      for(int j = 0; j < n; j++)
	{
	  parse_sum += a[i][j];
	}
      if(parse_sum != sum)
	return 0;
    }

  for(int i = 0; i < n; i++) //soma coluna a coluna
    {
      parse_sum = 0;
      for(int j = 0; j < n; j++)
	{
	  parse_sum += a[j][i];
	}
      if(parse_sum != sum)
	return 0;
    }

  parse_sum = 0;
  for(int i = 0; i < n; i++) //soma diagonal principal
    {
      parse_sum += a[i][i];
    }
  if(parse_sum != sum)
    return 0;

  parse_sum = 0;
  for(int i = 0; i < n; i++) //soma diagonal secundaria
    {
      parse_sum += a[i][(n-1)-i];
    }
  if(parse_sum != sum)
    return 0;
  return 1; //passou todos testes, logo e quadrado magico
}

int main(void)
{
  int cubo[] = {{2,9,4},{7,5,3},{6,1,8}};
  int n = 3;
  if(!magico(cubo, n))
    printf("nao ");
  printf("e cubo magico!\n");
}
