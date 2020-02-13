#include "../random_array.c"
#include <stdio.h>
#define N 10

int pares(int n, int *vet) {
  if (n == 0)
    return 0;
  return (vet[n] % 2 == 0 ? 1 : 0) + pares(n - 1, vet);
}

void inverte(int n, int *vet) {
  if (n == 1)
    return;

  int inicio = 0, final = n - 1, tmp;
  tmp = vet[inicio];
  vet[inicio] = vet[final];
  vet[final] = tmp;
  inverte(n - 2, &vet[1]);
}

float minimo(int n, float *vet) {
  if (n == 1)
    return vet[0];

  float subArr = minimo(n - 1, &vet[1]);
  return vet[0] < subArr ? vet[0] : subArr;
}

int main(void) {
  int vetor_1[N];
  random_int_array(N, vetor_1);
  printf("Quantidade de pares: %d\n", pares(N, vetor_1));

  printf("\n");

  int vetor_2[N];
  random_int_array(N, vetor_2);
  inverte(N, vetor_2);
  for (int i = 0; i < N; ++i) {
    printf("%d ", vetor_2[i]);
  }

  printf("\n\n");

  float vetor_3[N];
  random_float_array(N, vetor_3);
  printf("Menor valor: %.2f\n", minimo(N, vetor_3));

  return 0;
}
