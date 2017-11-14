#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  char ch;
  int count=0;
  
  while((ch=getchar()) != '\n')
    {
      if((ch>='A' && ch <= 'Z')||(ch>='a' && ch <= 'z'))
	count++;
    }
  printf("A frase contem %d letra(s)\n", count);
  
  return 0;
}
