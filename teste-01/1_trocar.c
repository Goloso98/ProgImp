#include <stdio.h>
#include <stdlib.h>

char trocar(char ch)
{
	if(ch >= 'A' && ch <= 'Z')
		return ch + 32;
	else if(ch >= 'a' && ch <= 'z')
		return ch - 32;
	else
		return ch;
}

int main(void)
{
	char ch;
	printf("Escreva o texto:\n")
	while ((ch = getchar()) != '\n')
		putchar(trocar(ch));
	printf("\n");
	
	return 0;
}
