#include <stdio.h>
#include <stdlib.h>
#include "../random_array.c"
#define N 5

void* aloca(size_t n) {
  void *v = malloc(n);
  if(!v) {
    perror("Erro:");
    exit(EXIT_FAILURE);
  }
  return v;
}

int *somente_pares (int n, int *v, int *npares) {
  int *pares = (int*) aloca(*npares * sizeof(int));
  for (int i = 0, j = 0; i < n; ++i) {
    if (!(v[i] % 2)) {
      pares[j] = v[i];
      j++;
    }
  }

  return pares;
}

int num_pares(int n, int *v) {
  int npares = 0;
  for (int i = 0; i < n; ++i) {
    if (!(v[i] % 2))
      npares++;
  }
  return npares;
}

int main(void) {
  int vet[N];
  random_int_array(N, vet);
  int npares = num_pares(N, vet);
  int *pares = somente_pares(N, vet, &npares);

  for (int i = 0; i < npares; ++i)
    printf("%d ", pares[i]);

  free(pares);
}
