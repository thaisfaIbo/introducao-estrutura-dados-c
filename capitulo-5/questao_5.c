#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void limparBuffer(void);
int gerarNumero(int min, int max);
void jogoA(void);
void jogoB(void);
void escolherJogo(int *escolha);

/*
 * Utils
 */
void limparBuffer(void) {
  char c;
  while ((c = getchar()) != EOF && c != '\n')
    ;
}

int gerarNumero(int min, int max) { return (rand() % (max - min + 1) + min); }

void escolherJogo(int *escolha) {
  int eValido;
  eValido = scanf("%d", &*escolha);

  while (eValido != 1 || (*escolha > 2 || *escolha < 1)) {
    limparBuffer();
    printf("Número inválido, digite apenas 1 ou 2: ");
    eValido = scanf("%d", &*escolha);
  }
}

/*
 * Jogos
 */
void jogoA(void) {
  int numeroComputador = gerarNumero(1, 1024);
  int adivinhacaoUsuario;
  int tentativas = 0;

  while (1) {
    printf("\nAdvinhe um número de 1 a 1024: ");
    scanf("%d", &adivinhacaoUsuario);
    limparBuffer();

    if (adivinhacaoUsuario == numeroComputador) {
      printf("Você acertou!\n");
      printf("Número de tentativas: %d\n", tentativas);
      break;
    } else {
      tentativas++; // Aumenta numero de tentativas

      if (adivinhacaoUsuario > numeroComputador)
        printf("Muito alto!\n");
      else if (adivinhacaoUsuario < numeroComputador)
        printf("Muito baixo!\n");
    }
  }
}

void jogoB(void) {
  printf("\nPense em um número de 1 a 1024\n");
  printf("O computador irá adivinhar o seu número\n");

  int menorNumero = 1;
  int maiorNumero = 1024;
  int adivinhacaoComputador = gerarNumero(menorNumero, maiorNumero);
  int tentativas = 0;
  int usuario;

  while (1) {
    printf("Computador: %d\n", adivinhacaoComputador);
    printf("O número fornecido é menor(-1), maior(1) ou igual(0)? ");
    scanf("%d", &usuario);
    limparBuffer();

    if (usuario == -1) {
      // O numero que o computador forneceu é menor que o do usuario
      tentativas++;
      menorNumero = adivinhacaoComputador;
      adivinhacaoComputador = gerarNumero(menorNumero, maiorNumero);
    } else if (usuario == 1) {
      // O numero que o computador forneceu é maior que o do usuario
      tentativas++;
      maiorNumero = adivinhacaoComputador;
      adivinhacaoComputador = gerarNumero(menorNumero, maiorNumero);
    } else if (usuario == 0) {
      printf("Computador venceu!\n");
      printf("Número de tentativas: %d\n", tentativas);
      break;
    } else {
      printf("O número que você digitou é inválido\n");
      printf("Digite apenas -1, 0 ou 1: ");
    }
  }
}

/*
 * Main
 */
int main(void) {
  srand(time(NULL));
  printf("Jogos de Adivinhação\n");
  printf("1 - Você adivinha um número\n");
  printf("2 - Computador adivinha um número\n");
  printf("Qual jogo você quer? Digite o número dele: ");

  int escolha;
  escolherJogo(&escolha);
  escolha == 1 ? jogoA() : jogoB();

  return 0;
}
