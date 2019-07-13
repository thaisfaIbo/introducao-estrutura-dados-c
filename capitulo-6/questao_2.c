#include <stdio.h>
#include "../random_array.c"
#define N 10

void inverte(int n, int* vet) {
  int tmp;
  for (int i = 0; i < n; ++i) {
    tmp = vet[i];
    vet[i] = vet[n - 1];
    vet[n - 1] = tmp;
    n--;
  }
}

int main(void) {
  int vetor[N];
  random_int_array(N, vetor);
  inverte(N, vetor);

  for (int i = 0; i < N; ++i) {
    printf("%d ", vetor[i]);
  }

  return 0;
}
