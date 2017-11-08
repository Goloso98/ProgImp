#include <stdio.h>

int main(void)
{
  float valor, soma;
  int contador = 0;

  printf("Introduzir valor (0 para sair): ");
  scanf("%f", &valor);

  while (valor != 0)
    {
      ++contador; //soma 1 ao contador
      soma += valor; //soma a variavel "valor" a variavel "soma"

      printf("Introduzir valor (0 para sair): ");
      scanf("%f", &valor);
    }
  
  printf("A media dos valores inseridos e %f.", soma/contador); //imprime media

  return 0;
}
