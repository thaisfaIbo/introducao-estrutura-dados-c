#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 4
#define N 3

void* aloca(size_t n) {
  void *v = malloc(n);
  if(!v) {
    perror("Erro:");
    exit(EXIT_FAILURE);
  }
  return v;
}

float* cria_matriz_vetor(int m, int n) {
  float* mat = (float*) aloca(m * n * sizeof(float));
  for (int i = 0; i < m; ++i)
    for (int j = 0; j < n; ++j)
      mat[i * n + j] = rand() % 100 + 1;

  return mat;
}

float** cria_matriz_ponteiros(int m, int n) {
  float** mat = (float**) aloca(m * sizeof(float*));
  for (int i = 0; i < m; ++i)
    mat[i] = (float*) aloca(n * sizeof(float));

  for (int i = 0; i < m; ++i)
    for (int j = 0; j < n; ++j)
      mat[i][j] = rand() % 100 + 1;

  return mat;
}

float** converte_mat_vetor(int m, int n, float* mat) {
  float** cmv = (float**) aloca(m * sizeof(float*));
  for (int i = 0; i < m; ++i)
    cmv[i] = (float*) aloca(n * sizeof(float));

  for (int i = 0; i < m; ++i)
    for (int j = 0; j < n; ++j)
      cmv[i][j] = mat[i * n + j];

  return cmv;
}

float* converte_mat_pont(int m, int n, float** mat) {
  float* cmp = (float*) aloca(m * n * sizeof(float));
  for (int i = 0; i < m; ++i)
    for (int j = 0; j < n; ++j)
      cmp[i * n + j] = mat[i][j];

  return cmp;
}

int main(void) {
  srand(time(NULL));
  float* mv = cria_matriz_vetor(M, N);
  float** mp = cria_matriz_ponteiros(M, N);

  float** cmv = converte_mat_vetor(M, N, mv);
  float* cmp = converte_mat_pont(M, N, mp);
  return 0;
}
