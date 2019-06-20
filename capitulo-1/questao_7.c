#include <stdio.h>

int main(void) {
  printf("Conversor de temperatura Celsius para Fahrenheit\n");

  float f, c;

  printf("Entre com temperatura em Celsius: ");
  scanf("%f", &c);
  f = 1.8 * c + 32;
  printf("Temperatura em Fahrenheit: %f\n", f);
  return 0;
}
