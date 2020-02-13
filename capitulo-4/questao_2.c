#include "../input.c"
#include <stdio.h>

int mdc(int num1, int num2);
int mdcTresNumeros(int num1, int num2, int num3);

// Calcula mdc usando o algoritmo de Euclides
int mdc(int num1, int num2) {
  int resto = num1 % num2;
  if (resto == 0)
    return num2;
  else
    return mdc(num2, resto);
}

int mdcTresNumeros(int num1, int num2, int num3) {
  int resultado = mdc(num1, num2);
  resultado = mdc(resultado, num3);
  return resultado;
}

int main(void) {
  int x, y, z, mdcTotal;

  printf("Programa para calcular o MDC de três números\n");

  printf("Digite três números positivos, separados por espaço: ");
  x = get_int();
  y = get_int();
  z = get_int();

  mdcTotal = mdcTresNumeros(x, y, z);

  printf("MDC(%d, %d, %d) =  %d\n", x, y, z, mdcTotal);

  return 0;
}
