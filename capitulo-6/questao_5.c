#include <stdio.h>
#include "../random_array.c"
#define N 3

float harmonica(int n, float *v) {
  float denominador = 0;
  for (int i = 0; i < n; ++i)
    denominador += 1 / v[i];
  return n / denominador;
}

int main(void) {
  float vetor[N];
  random_float_array(N, vetor);
  printf("Média harmônica: %.2f\n", harmonica(N, vetor));
}
