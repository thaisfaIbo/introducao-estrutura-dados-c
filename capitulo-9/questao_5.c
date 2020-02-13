#include <stdio.h>

typedef struct aluno Aluno;
struct aluno {
  char nome[81];
  char matricula[8];
  char turma;
  float p1, p2, p3;
};

static void imprime_aluno(Aluno *aluno, float media) {
  printf("Matrícula: %s\n", aluno->matricula);
  printf("Nome: %s\n", aluno->nome);
  printf("Turma: %c\n", aluno->turma);
  printf("Média: %.2f\n", media);
}

float media(int p1, int p2, int p3) { return (p1 + p2 + p3) / 3; }

void imprime_aprovados(int n, Aluno **turmas) {
  float m;
  for (int i = 0; i < n; ++i) {
    m = media(turmas[i]->p1, turmas[i]->p2, turmas[i]->p3);
    if (m >= MEDIA)
      imprime_aluno(turmas[i], m);
  }
}
