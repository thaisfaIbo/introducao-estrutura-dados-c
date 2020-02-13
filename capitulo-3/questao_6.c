#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  printf("Jogo de par ou ímpar\n");

  // Truque para gerar números aleatórios toda vez que rodar o programa
  srand(time(NULL));

  // Gera ou número 0 ou 1
  int escolha = rand() % 1;

  if (escolha == 0)
    printf("O computador escolheu par, logo você é ímpar\n");
  else
    printf("O computador escolheu ímpar, logo você é par\n");

  // Gera um número de 1 a 10
  int computador = rand() % 10 + 1;

  int usuario;
  do {
    printf("Digite um valor inteiro de 1 a 10: ");
    scanf("%d", &usuario);
  } while (usuario < 1 || usuario > 10);

  printf("Computador: %d\n", computador);
  printf("Resultado: %d\n", computador + usuario);

  if ((usuario + computador) % 2 != escolha) {
    printf("Ímpar\n");
    printf("Você ganhou!\n");
  } else {
    printf("Par\n");
    printf("Você perdeu!\n");
  }

  return 0;
}
