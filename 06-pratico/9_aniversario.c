#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define classSize 23
#define numTrials 10000

int main(void)
{
  int r; //random
  int year[365]; //para tabela dos anos
  int found_flag; //0 ou 1 (caso encontre 2 ou + aniversarios no mesmo dia)
  int count; //contador para ciclo while
  int dupeCount = 0; //por cada for (linha 18) soma 1 caso exista 2 ou + aniversarios no memso dia
  int a, b, c, d; //for variaveis
  double probabilidade;

  srand((unsigned)time(NULL));

  for (a = 0; a < numTrials; ++a)
  {

    for (b = 0; b < 365; ++b)
    {
      /* Preencher tabela com zeros */
      year[b] = 0;
    }

    //com a tabela dos dias escolhe um dia rand para somar ao valor existente
    //assim quando existir anuversario no mesmo dia o numero sera maior que 1
    for (c = 0; c < classSize; ++c)
    {
      r = rand() / (RAND_MAX / 365);
      year[r] += 1;
    }

    //imprimir tabela "year"
    /*
    printf("{ %d,", year[0]);
    for (d = 1; d < 364; ++d)
    {
      printf(" %d,", year[d]);
      if (d % 10 == 0)
        printf("\n");
    }
    printf(" %d }\n", year[364]); 
    */

    found_flag = 0; //reset
    count = 0;
    while (found_flag == 0 && count < 365)
    {
      if (year[count] > 1)
      {
        found_flag = 1;
      }
      count++;
    }

    if (found_flag)
    {
      dupeCount += 1;
    }
  }

  probabilidade = (double)dupeCount / (double)numTrials;
  printf("A probabilidade de partilharem o mesmo aniversario numa turma de %d alunos e de %f.\n", classSize, probabilidade);

  return 0;
}

/*
codigo original em python:
http://interactivepython.org/runestone/static/everyday/2013/09/1_birthday.html
*/