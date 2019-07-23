#include <stdio.h>

typedef struct aluno Aluno;
struct aluno {
  char nome[81];
  char matricula[8];
  char turma;
  float p1, p2, p3;
};

float media(int p1, int p2, int p3) {
  return (p1 + p2 + p3) / 3;
}

float media_turma(int n, Aluno** turmas, char turma) {
  float mf = 0, mf_aluno;
  for (int i = 0; i < n; ++i) {
    mf_aluno = media(turmas[i]->p1, turmas[i]->p3, turmas[i]->p3);
    mf += mf_aluno;
  }
  return mf / n;
}
