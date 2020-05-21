#include "vetor_din.h"

#include <stdio.h>
#include <stdlib.h>

struct vetordin {
  int n;     // número de elementos armazenados
  int nmax;  // dimensão do vetor
  float* v;  // vetor dos elementos
};

static void* aloca(int nbytes) {
  void* p = malloc(nbytes);
  if (!p) {
    perror("Erro na alocação de memória");
    exit(EXIT_FAILURE);
  }
  return p;
};

static void realoca(VetorDin* vd) {
  vd->nmax *= 2;
  float* novo_vetor = (float*)realloc(vd->v, vd->nmax * sizeof(float));
  if (novo_vetor != NULL) {
    vd->v = novo_vetor;
  } else {
    perror("Erro na realocação de memória");
    exit(EXIT_FAILURE);
  }
}

VetorDin* vd_cria(void) {
  VetorDin* vd = (VetorDin*)aloca(sizeof(VetorDin));
  vd->n = 0;
  vd->nmax = 4;
  vd->v = (float*)aloca(vd->nmax * sizeof(float));
  return vd;
}

void vd_insere(VetorDin* vd, float x) {
  if (vd->n == vd->nmax)  // verifica a capacidade do vetor
    realoca(vd);
  vd->v[vd->n++] = x;  // insere elemento no final e incrementa n
}

int vd_tam(VetorDin* vd) { return vd->n; }

float vd_acessa(VetorDin* vd, int i) {
  if (i < 0 && i > vd->n) // Verifica índice
    perror("Erro na função vd_acessa: o índice não existe no vetor");
  return vd->v[i];
}

void vd_libera(VetorDin* vd) {
  free(vd->v);
  free(vd);
}
