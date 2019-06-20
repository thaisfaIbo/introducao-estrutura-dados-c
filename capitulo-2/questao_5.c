#include <stdio.h>

int main(void) {
  printf("Programa para calcular a menor quantidade de notas possível para um valor\n");

  int valor;

  printf("Digite o valor: ");
  scanf("%d", &valor);

  int notas[7] = {100, 50, 20, 10, 5, 2, 1};
  int quantidadeNotas[7];

  for (int i = 0; i <= 6; i++) {
    quantidadeNotas[i] = valor / notas[i];
    valor %= notas[i];
  }

  printf("NOTAS\n");
  printf("R$100: %d\n", quantidadeNotas[0]);
  printf("R$50: %d\n", quantidadeNotas[1]);
  printf("R$20: %d\n", quantidadeNotas[2]);
  printf("R$10: %d\n", quantidadeNotas[3]);
  printf("R$5: %d\n", quantidadeNotas[4]);
  printf("R$2: %d\n", quantidadeNotas[5]);
  printf("R$1: %d\n", quantidadeNotas[6]);

  return 0;
}
