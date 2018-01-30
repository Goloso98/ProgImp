void ordenar(int vec[], int n) {
  int i, j;

  for(i = 1; i < n; i++) {
    int x = vec[i];
    j = i-1;
    while(j>=0 && vec[j] > x) {
      vec[j+1] = vec[j];
      j--;
    }
    vec[j+1] = x;
  }
}

int segundo_maior(int vec[], int n) {
  ordenar(vec, n);
  return vec[n-2];
}
