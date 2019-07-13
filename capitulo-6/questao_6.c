#include <stdio.h>
#include <math.h>
#include "../random_array.c"
#define N 10

float geometrica(int n, float *v) {
  float g = v[0];
  for (int i = 1; i < N; ++i)
    g *= v[i];
  return pow(g, (float)1/N);
}

int main(void) {
  float vetor[N];
  random_float_array(N, vetor);
  printf("Média geométrica: %.2f\n", geometrica(N, vetor));
}
