#include "../random_array.c"
#include <stdio.h>
#define N 10

float minimo(int n, float *vet) {
  float min = vet[0];
  for (int i = 0; i < n; ++i) {
    if (vet[i] < min)
      min = vet[i];
  }
  return min;
}

int main(void) {
  float vetor[N];
  random_float_array(N, vetor);
  float min = minimo(N, vetor);
  printf("Menor valor: %.2f\n", min);
  return 0;
}
