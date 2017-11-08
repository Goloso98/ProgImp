#include <stdio.h>

int main(void)
{
  int decimal, bin = 0, x10 = 1, intermedio;
  printf("Diga o numero a converter: ");
  scanf("%d", &decimal);

  do
    {
      intermedio = decimal % 2; //1 ou 0
      bin += intermedio * x10; //valor escrito ao contrario (multiplos de 10)
      x10 *= 10; //mover o numero seguinte para a esquerda
      decimal /= 2; //atualizar a variavel
      
    } while (decimal != 0);

  printf("%d\n", bin);

  return 0;
}
