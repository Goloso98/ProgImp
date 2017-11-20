#include <stdio.h>

int filtrar_positivos(int vec[], int size) {
   int i, k = 0;
   // i: índice do próximo valor 
   // k: número de posotivos
   for(i = 0; i < size; i++) {
      int val = vec[i];
      if(val > 0) {
         vec[k++] = val;
           // novo valor positivo
      }
   }
   return k;
}

int main(void)
{
   int numeros[] = {1,3,2,-1,-2,4,-3,5,'\0'};
   int dim = 8;
   int positivos;

   positivos = filtrar_positivos(numeros, dim);
   printf("\n");
   for (int i = 0; i < positivos; ++i)
   {
      printf("%d\n", numeros[i]);
   }
   printf("\n");
   return 0;
}