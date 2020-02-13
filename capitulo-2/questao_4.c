#include <stdio.h>

int main(void) {
  printf("Programa para converter um ângulo em radianos para graus, minutos e "
         "segundos\n");
  float anguloRadianos;

  printf("Digite o valor do ângulo em radianos: ");
  scanf("%f", &anguloRadianos);
  float PI = 3.1415927;
  float graus = anguloRadianos * (180 / PI);
  float minutos = (graus - (int)graus) * 60;
  float segundos = (minutos - (int)minutos) * 60;

  printf("%dº %d\' %d\"\n", (int)graus, (int)minutos, (int)segundos);
  return 0;
}
