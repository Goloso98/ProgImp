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

int main(void)
{

}