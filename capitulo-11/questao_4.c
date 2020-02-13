#include <string.h>

typedef struct aluno Aluno;

struct aluno {
  char nome[81];
  float nota;
};

int compara(Aluno *a, Aluno *b) {
  if (strcmp(a->nome, b->nome) > 0)
    return 1;
  else
    return 0;
}

void troca(Aluno *a, Aluno *b) {
  Aluno tmp = *a;
  *a = *b;
  *b = tmp;
}

void ordem_alfabetica(int tamanho_vetor, Aluno *v) {
  for (int i = tamanho_vetor - 1; i > 0; i--) {
    int teveTroca = 0;

    for (int j = 0; j < i; j++) {
      if (compara(&v[j], &v[j + 1])) {
        troca(&v[j], &v[j + 1]);
        teveTroca = 1;
      }
    }

    if (!teveTroca)
      return;
  }
}
