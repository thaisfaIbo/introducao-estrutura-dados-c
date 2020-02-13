#include <stdio.h>
#include <stdlib.h>

int mais_proximo(int tamanho_vetor, int *vetor, int elemento)
{
  int ini = 0;
  int fim = tamanho_vetor - 1;

  while (ini <= fim)
  {
    int meio = (ini + fim) / 2;

    if (abs(elemento - vetor[meio]) <= 2)
      return vetor[meio];
    else if (elemento < vetor[meio])
      fim = meio - 1;
    else if (elemento > vetor[meio])
      ini = meio + 1;
    else
      return meio;
  }

  return -1;
}