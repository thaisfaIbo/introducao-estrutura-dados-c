#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4

void* aloca(size_t n) {
  void *v = malloc(n);
  if(!v) {
    perror("Erro:");
    exit(1);
  }
  return v;
}

void ti_libera(int n, float** mat) {
  for (int i = 0; i < n; ++i)
    free(mat[i]);

  free(mat);
}

float ti_acessa(int i, int j, float** mat) {
  return (i >= j) ? mat[i][j] : 0;
}

void ti_atribui(int i, int j, float x, float** mat) {
  if (i >= j)
    mat[i][j] = x;
}

float** ti_cria(int n) {
  float** mat = (float**) aloca(n * sizeof(float*));
  for (int i = 0; i < n; ++i) {
    mat[i] = (float*) aloca((i + 1) * sizeof(float));
    for (int j = 0; j <= i; ++j)
      mat[i][j] = 0;
  }
  return mat;
}

int main(void) {
  srand(time(NULL));
  float** mat = ti_cria(N);

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      if (i >= j) {
        float x = rand() % 100 + 1;
        ti_atribui(i, j, x, mat);
      }
    }
  }

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j)
      printf("%.2f ", ti_acessa(i, j, mat));
    printf("\n");
  }

  ti_libera(N, mat);
  return 0;
}
