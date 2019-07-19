#include <stdio.h>
#include <stdlib.h>
#include "../random_array.c"
#define N 10


void* aloca(size_t n) {
  void *v = malloc(n);
  if(!v) {
    perror("Erro:");
    exit(EXIT_FAILURE);
  }
  return v;
}

float* reverso(int n, float* vet) {
  float *rev = (float*) aloca(n * sizeof(float));
  float tmp;
  for (int i = 0; i < n; ++i) {
    tmp = vet[i];
    rev[i] = vet[n - 1];
    rev[n - 1] = tmp;
    n--;
  }

  return rev;
}

int main(void) {
  float v[N];
  random_float_array(N, v);
  float *rev = reverso(N, v);

  for (int i = 0; i < N; ++i)
    printf("%.2f ", rev[i]);

  free(rev);
}
