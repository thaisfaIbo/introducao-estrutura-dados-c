#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float media (char* matricula, char* nome_arquivo) {
  FILE* arquivo = fopen(nome_arquivo, "rt");

  if (!arquivo) {
    fprintf(stderr, "Erro\n");
    exit(EXIT_FAILURE);
  }

  char linha[121], aluno[10];
  float p1, p2, p3, media = -1;

  while (fgets(linha, sizeof(linha), arquivo) != NULL) {
    if(sscanf(linha, "%s %f %f %f", aluno, &p1, &p2, &p3) > 0) {
      // Se as strings aluno e matriz sao iguais
      if (!strcmp(aluno, mat)) {
        media = (p1 + p2 + p3) / 3;
        break;
      }
    }
  }

  fclose(arquivo);

  return media;
}
