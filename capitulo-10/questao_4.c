#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno Aluno;
struct aluno {
  char mat[8];
  char nome[81];
  float cr;
};

Aluno cria_aluno (char* mat, char* nome, float* cr) {
  struct aluno a;
  strcpy(a.mat, mat);
  strcpy(a.nome, nome);
  a.cr = *cr;
  return a;
}

Aluno* carrega (char* nome_arquivo, int *alunos_existentes) {
  FILE* arquivo = fopen(nome_arquivo, "rt");
  if (!arquivo) return NULL;

  char linha[81];

  while (fgets(linha, sizeof(linha), arquivo))
    if (sscanf(linha, "%d", alunos_existentes) == 1) break;

  Aluno *alunos = (Aluno*) malloc(*alunos_existentes * sizeof(Aluno));
  int i = 0;
  float cr;
  char mat[8], nome[81];

  while ((i < *alunos_existentes) && (fscanf(arquivo, " %7s '%80[^']' %f", mat, nome, &cr) == 3))
    alunos[i++] = cria_aluno(mat, nome, &cr);

  return alunos;
}
