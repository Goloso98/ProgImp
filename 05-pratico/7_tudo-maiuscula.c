#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  char ch;
  
  while((ch=getchar()) != '\n')
    {
      if(ch>='a' && ch <= 'z')
	putchar(ch-32);
      else
	putchar(ch);
    }
  putchar('\n');
  
  return 0;
}
