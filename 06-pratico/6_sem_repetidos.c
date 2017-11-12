#include <stdio.h>

int ocorre(int vec[], int size, int val)
{
  for (int i = 0; i < size; ++i)
  {
    if (vec[i] == val)
    {
      return 1;
    }
  }
  return 0;
}

void sem_repetidos(int vec[], int vec_size)
{
  int n = 0;
  int vec_aux[vec_size];
  int vec_aux_size = 0;

  while(vec[n] > 0) //vetor so vai ter numeros positivos
  {
    if (!ocorre(vec_aux, n, vec[n])) //verifica se ja existe
    {
      vec_aux[vec_aux_size] = vec[n];
      vec_aux_size++;
    }
    n++;
  }

  for (int i = vec_aux_size; i < vec_size; ++i) //preenche o resto com fim
  {
    vec_aux[i] = '\0';
  }

  for (int i = 0; i < vec_size; ++i) //copia o vec_aux[] para vec[]
  {
    vec[i] = vec_aux[i];
  }
}

int main(void)
{
  int vec[] = {1,3,1,1,2,-1,'\0'}; //vetor a tirar os repetidos
  int size = 6; //tamanho do vetor acima
  int n = 0;

  sem_repetidos(vec, size);

  printf("\n");
  while(vec[n] != '\0')
  {
    printf("%d ", vec[n]);
    n++;
  }
  printf("\n");
  return 0;
}
