#include <stdio.h>
#include <stdlib.h>
#define MEDIA 5

int main(void) {
  FILE* entrada = fopen("turma.txt", "rt");
  FILE* saida = fopen("aprovados.txt", "wt");

  if (!entrada || !saida) {
    fprintf(stderr, "Erro\n");
    exit(EXIT_FAILURE);
  }

  char nome[81];
  float p1, p2, media;

  while (fscanf(entrada, " %80[^\n]%f %f", nome, &p1, &p2) == 3) {
    media = (p1 + p2) / 2;

    if (media >= MEDIA)
      fprintf(saida, "%s\t\t%.1f\n", nome, media);
  }

  fclose(entrada);
  fclose(saida);

  return 0;
}
