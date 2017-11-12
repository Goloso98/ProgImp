#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand((unsigned)time(NULL));

  printf("a) um inteiro entre 0 e 9: %d\n",
    0 + rand() / (RAND_MAX / (9 - 0 + 1) + 1)
    );
  
  printf("b) um inteiro entre 1 e 10: %d\n",
    1 + rand() / (RAND_MAX / (10 - 1 + 1) + 1)
    );
  
  printf("c) um inteiro entre 1 e 100: %d\n",
    1 + rand() / (RAND_MAX / (100 - 1 + 1) + 1)
    );
  
  printf("d) um inteiro entre -10 e 10: %d\n",
    -10 + rand() / (RAND_MAX / (10 - (-10) + 1) + 1)
    );
  
  printf("e) um double entre 0.0 e 1.0: %lf\n",
    (double)rand() / ((double)RAND_MAX + 1)
    );
  
  printf("f) um double entre -1.0 e 1.0: %lf\n",
    (double)rand() / ((double)RAND_MAX + 1) * 2 -1
    );
  
  printf("g) um inteiro par entre 0 e 100: %d\n",
    (0 + rand() / (RAND_MAX / (50 - 0 + 1) + 1)) * 2
    );
  
  printf("h) um inteiro impar entre 1 e 99: %d\n",
    (0 + rand() / (RAND_MAX / (49 - 0 + 1) + 1)) * 2 + 1
    );

  return 0;
}