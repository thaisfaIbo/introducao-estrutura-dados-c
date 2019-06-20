#include <stdio.h>
#include <math.h>

int main(void) {
  printf("Programa para converter coordenadas polares em cartesianas\n");

  double raio, angulo;
  
  printf("Digite o raio: ");
  scanf("%lf", &raio);

  printf("Digite o angulo: ");
  scanf("%lf", &angulo);

  double x = raio * cos(angulo);
  
  double y = raio * sin(angulo);

  printf("Coordenadas cartesiana: %.3f, %.3f\n", x, y);

  return 0;
}
