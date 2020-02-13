#include <stdio.h>

int main(void) {
  printf("Programa para calcular o tempo em formato hora : minuto : segundo "
         "através da quantidade de segundos totais\n");

  float totalSegundos;

  printf("Digite os segundos totais: ");
  scanf("%f", &totalSegundos);

  int horas = totalSegundos / 3600;
  int minutos = ((int)totalSegundos % 3600) / 60;
  float segundos = (int)totalSegundos % 60;

  printf("%02d : %02d : %05.2f\n", horas, minutos, segundos);

  return 0;
}
