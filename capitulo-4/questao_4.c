#include "../input.c"
#include <stdio.h>

double potenciacao(double base, int expoente);

double potenciacao(double base, int expoente) {
  return (expoente > 0) ? (base * potenciacao(base, expoente - 1)) : 1;
}

int main(void) {
  printf("Programa de potenciação\n");

  printf("Digite a base: ");

  double base = get_double();

  printf("Digite o expoente: ");
  int expoente = get_int();

  double resultado = potenciacao(base, expoente);
  printf("%.1f^%d = %.1lf\n", base, expoente, resultado);

  return 0;
}
