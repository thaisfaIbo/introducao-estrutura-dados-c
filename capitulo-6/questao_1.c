#include "../random_array.c"
#include <stdio.h>
#define N 10

int pares(int n, int *vet) {
  int c = 0;
  for (int i = 0; i < n; ++i) {
    if (vet[i] % 2 == 0)
      c++;
  }
  return c;
}

int main(void) {
  int vetor[N];
  random_int_array(N, vetor);
  printf("\nQuantidade de pares: %d\n", pares(N, vetor));
  return 0;
}
