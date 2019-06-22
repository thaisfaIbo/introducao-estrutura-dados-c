#include <stdio.h>
#include <math.h>
#include "../input.c"

float raiz(float num) {
  float x = num / 2;
  float x1 = x + 1;

  do {
    x1 = x;
    x = (x + (num / x)) / 2;
  } while (x != x1);

  return x;
}

int main(void) {
  printf("Programa para calcular a raiz quadrada utilizando o método Babylon\n");
  printf("Digite um número: ");
  float num = get_float();
  float r = raiz(49);
  printf("A raiz de %.2f é %.2f\n", num, r);
  return 0;
}
