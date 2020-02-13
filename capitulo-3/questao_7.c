#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  printf("Jogo de pedra, papel e tesoura\n");
  printf("0 - PEDRA\n1 - PAPEL\n2 - TESOURA\n");

  int usuario;
  do {
    printf("Digite o número do objeto: ");
    scanf("%d", &usuario);
  } while (usuario < 0 || usuario > 2);

  // Truque para gerar números aleatórios toda vez que rodar o programa
  srand(time(NULL));

  // Gera um número de 0 a 2
  int computador = rand() % 3;
  printf("Computador: %d\n", computador);

  // Papel(1) ganha de pedra(0)
  // Pedra(0) ganha de tesoura(2)
  // Tesoura(2) ganha de papel(1)
  if ((usuario == 1 && computador == 0) || (usuario == 0 && computador == 2) ||
      (usuario == 2 && computador == 1)) {
    printf("Você ganhou!\n");
  } else if (usuario == computador) {
    printf("Empate\n");
  } else {
    printf("Você perdeu!\n");
  }

  return 0;
}
