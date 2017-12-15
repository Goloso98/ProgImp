#include <stdio.h>

void select_sort(int vec[], int n) {
  int i, j;
  for(i = 0; i < n; i++) {
    int imax = i; // índice inicial do mínimo
    for(j = i+1; j < n; j++) {
      if(vec[j] > vec[imax]) imax = j;
    }
    // trocar o max com vec[i]
    if(imax != i) {
      int temp = vec[i];
      vec[i] = vec[imax];
      vec[imax] = temp;
    }
  }
}

int main(void)
{
  int vec[] = {5,4,79,6,1,5,7,89,4,5,'\0'};
  int size = 10;

  select_sort(vec, size);

  for(int i = 0; i < size; i++)
    {
      printf("%d\n", vec[i]);
    }

  return 0;
}
