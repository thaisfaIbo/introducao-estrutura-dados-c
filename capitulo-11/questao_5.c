#include <stdio.h>

typedef struct funcionario Funcionario;

struct funcionario {
  char nome[81];
  float valor_hora;
  int horas_mes;
};

float calcular_salario(Funcionario *f) { return f->horas_mes * f->valor_hora; }

void troca(Funcionario **a, Funcionario **b) {
  Funcionario *tmp = *a;
  *a = *b;
  *b = tmp;
}

int separa(Funcionario **vetor, int menor, int maior) {
  Funcionario *pivo = vetor[maior];
  int i = (menor - 1);

  for (int j = menor; j <= maior - 1; j++) {
    if (calcular_salario(vetor[j]) > calcular_salario(pivo)) {
      i++;
      troca(&vetor[i], &vetor[j]);
    }
  }

  troca(&vetor[i + 1], &vetor[maior]);

  return (i + 1);
}

void quicksort(Funcionario **vetor, int menor, int maior) {
  if (menor < maior) {
    int pi = separa(vetor, menor, maior);

    quicksort(vetor, menor, pi - 1);
    quicksort(vetor, pi + 1, maior);
  }
}

void imprime_marajas(int tamanho_vetor, Funcionario **vetor) {
  quicksort(vetor, 0, tamanho_vetor - 1);

  printf("Marajas:\n");

  for (int i = 0; i < 5; i++)
    printf("%s: R$ %.2f\n", vetor[i]->nome, calcular_salario(vetor[i]));
}
