#include "../random_array.c"
#include <stdio.h>
#define N 10

float ponderada(int n, float *valores, float *pesos) {
  float numerador = 0.0, denominador = 0.0;
  for (int i = 0; i < n; ++i) {
    numerador += valores[i];
    denominador += pesos[i];
  }
  return numerador / denominador;
}

int main(void) {
  float valores[N], pesos[N];
  random_float_array(N, valores);
  random_float_array(N, pesos);
  printf("A média ponderada é %.2f\n", ponderada(N, valores, pesos));
  return 0;
}
