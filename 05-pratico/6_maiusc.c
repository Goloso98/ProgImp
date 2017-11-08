
#include <stdio.h>

char maiusc(char ch);

int main(void)
{
    char name;

    //char c = 'a';
    //printf("%d\n", c==97);

    //scanf("%c", &name);
    while (!(scanf("%c", &name) == 'A'))
    {
        printf("%c", maiusc(name));
    };

    return 0;
}

char maiusc(char ch)
{
    if ( ch > 96 && ch < 123 )
    {
        ch -= 32;
    };

    return ch;
}