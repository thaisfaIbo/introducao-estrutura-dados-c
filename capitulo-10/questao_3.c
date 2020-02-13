#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario Funcionario;
struct funcionario {
  char nome[81];
  float valor_hora;
  int horas_mes;
};

Funcionario *cria_funcionario(char *nome, float *valor_hora, int *horas_mes) {
  Funcionario *f = (Funcionario *)malloc(sizeof(Funcionario));
  strcpy(f->nome, nome);
  f->valor_hora = *valor_hora;
  f->horas_mes = *horas_mes;
  return f;
}

void carrega(int tamanho_array, Funcionario **vet, char *nome_arquivo) {
  FILE *arquivo = fopen(nome_arquivo, "rt");

  if (!arquivo) {
    fprintf(stderr, "Erro\n");
    exit(EXIT_FAILURE);
  }

  int i = 0;
  char nome[81];
  float valor_hora;
  int horas_mes;

  while ((i < tamanho_array) && (fscanf(arquivo, " %80[^\n]%f %d", nome,
                                        &valor_hora, &horas_mes) == 3))
    vet[i++] = cria_funcionario(nome, &valor_hora, &horas_mes);

  fclose(arquivo);
}
