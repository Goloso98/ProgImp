#include <stdio.h>

int main(void)
{
  int a, b, c = 1, r, t;
  /*
  a,b >args do mdc
  c >contador de iteracoes
  r >resto do calculo intermedio do mdc
  t >temporaria
  */

  printf("Calculo do mdc(a,b):\n");
  printf("a=");
  scanf("%d", &a);
  printf("b=");
  scanf("%d", &b);

  if(a < 1 || b < 1)
  {
    printf("O mdc(%d,%d) e impossivel.\n", a, b);
    return 0;
  }

  printf("mdc(%d,%d)",a ,b);

  while(b != 0)
  {
    if (b > a) //ordenar
    {
      t = a;
      a = b;
      b = t;
    }

    r = a%b; //mdc
    a = b;
    b = r;

    if (b == 0)
      printf(" = mdc(%d,%d)", a, a);
    else 
      printf(" = mdc(%d,%d)", a, b);

    c++;
  }
  printf(" = %d\n", a);
  printf("%d iteracoes\n", c);

}