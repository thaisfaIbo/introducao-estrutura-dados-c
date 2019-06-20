#include <stdio.h>

#define PI 3.14159F

void calcularVolume(double raio, double altura, double *volume);

void calcularVolume(double raio, double altura, double *volume) {
  *volume = (PI * (altura * altura) * (3 * raio - altura)) / 3;
}

int main(void) {
  double altura, raio, volume;

  printf("Programa para calcular o volume de uma calota esférica\n");

  printf("Digite a altura: ");
  scanf("%lf", &altura);

  printf("Digite o raio: ");
  scanf("%lf", &raio);

  calcularVolume(raio, altura, &volume);

  printf("O volume é: %.2lf\n", volume);

  return 0;
}
