#include <stdio.h>
#include <math.h>

int main(void) {
  printf("Programa para calcular o volume da esfera\n");

  double raio;

  printf("Digite o valor do raio: ");
  scanf("%lf", &raio);

  double volumeEsfera = (4 * 3.14 * pow(raio, 3)) / 3;
  printf("Volume da esfera: %.2f\n", volumeEsfera);

  return 0;
}
