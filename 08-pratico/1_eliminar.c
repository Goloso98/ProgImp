#include <stdio.h>

int eliminar(int vec[], int size, int val)
{
  int i;
  i = 0;

  while(vec[i] != val && i < size)
    {
      i++;
    }

  for(int n = i; n < size; n++)
    {
      vec[n] = vec[n+1];
    }

  return size-1;
}

int main(void)
{
  int vec[] = {13, 17, 15, 17, 20, '\0'};

  int new_size = eliminar(vec, 5, 17);

  printf("vec:\n");
  for(int i = 0; i < new_size; i++)
    {
      printf("%d\n", vec[i]);
    }
  printf("size: %d\n", new_size);

  return 0;
}
