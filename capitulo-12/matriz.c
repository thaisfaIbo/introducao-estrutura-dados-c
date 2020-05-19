#include "matriz.h"

#include <stdlib.h>

struct matriz {
  int linhas;
  int colunas;
  float** vetor;
};

Matriz* mat_cria(int linhas, int colunas) {
  Matriz* mat = (Matriz*)malloc(sizeof(Matriz)) mat->linhas = linhas;
  mat->colunas = colunas;
  mat->vetor = (float**)malloc(linhas * sizeof(float*));

  for (int i = 0; i < linhas; ++i)
    mat->vetor[i] = (float*)malloc(colunas * sizeof(float));

  return mat;
};

void mat_libera(Matriz* mat) {
  for (int i = 0; i < mat->linhas; ++i) free(mat->vetor[i]);
  free(mat);
};

float mat_acessa(Matriz* mat, int linha, int coluna) {
  return mat->vetor[linha][coluna];
};

void mat_atribui(Matriz* mat, int linha, int coluna, float valor) {
  mat->vetor[linha][coluna] = valor;
};

int mat_linhas(Matriz* mat) { return mat->linhas; };

int mat_colunas(Matriz* mat) { return mat->colunas; };
