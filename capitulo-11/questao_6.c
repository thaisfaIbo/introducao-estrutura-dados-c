#include <stdlib.h>

typedef struct aluno Aluno;

struct aluno {
  char mat[8];
  char nome[81];
  float cr;
};

static int comp_alunos_cr(const void *p1, const void *p2) {
  Aluno *a1 = (Aluno *)p1;
  Aluno *a2 = (Aluno *)p2;

  if ((*a1)->cr < (*a2)->cr)
    return -1;
  else if ((*a1)->cr < (*a2)->cr)
    return 1;
  else
    return 0;
}

void mediano(int tamanho_vetor, Aluno *vetor) {
  qsort(vetor, tamanho_vetor, sizeof(Aluno *), comp_alunos_cr);

  return vetor[tamanho_vetor / 2];
}
