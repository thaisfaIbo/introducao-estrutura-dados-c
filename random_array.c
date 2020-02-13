// Thaís Falbo - 2019
// Script para gerar arrays com valores aleatórios
// NOTA: O método srand não foi utilizado pq caso necessite
// criar várias arrays com mesmo tipo, elas terão os mesmos valores
#include <stdio.h>
#include <stdlib.h>

void random_int_array(int tamanho, int *vetor) {
  for (int i = 0; i < tamanho; ++i) {
    vetor[i] = rand() % 100;
    printf("%d ", vetor[i]);
  }
  printf("\n");
}

void random_float_array(int tamanho, float *vetor) {
  for (int i = 0; i < tamanho; ++i) {
    vetor[i] = ((float)rand() / RAND_MAX) * 100.00;
    printf("%.2f ", vetor[i]);
  }
  printf("\n");
}
