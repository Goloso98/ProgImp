double media(int vec[], int n) {
   double sum = 0;
   for(int i = 0; i<n ; i++) {
       sum += vec[i];
   }
   return sum/n;
}
