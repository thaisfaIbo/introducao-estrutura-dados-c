#include <stdio.h>

int main(void) {
  printf("Conversor de temperatura Fahrenheit para Celsius\n");

  float f, c;

  printf("Entre com a temperatura em Fahrenheit: ");
  scanf("%f", &f);
  c = (f - 32) / 1.8;
  printf("Temperatura em Celsius: %f\n", c);
  return 0;
}
