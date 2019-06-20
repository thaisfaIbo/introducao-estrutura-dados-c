#include <stdio.h>

int main(void) {
  printf("Programa para calcular a posição e velocidade de uma partícula");

  double instante, aceleracao, posicaoInicial, velocidadeInicial;

  printf("Digite o instante: ");
  scanf("%lf", &instante);

  printf("Digite a aceleração: ");
  scanf("%lf", &aceleracao);

  printf("Digite a posição inicial: ");
  scanf("%lf", &posicaoInicial);

  printf("Digite a velocidade inicial: ");
  scanf("%lf", &velocidadeInicial);

  double posicao = posicaoInicial + (velocidadeInicial * instante);
  posicao += (aceleracao * (instante * instante)) / 2;

  double velocidade = velocidadeInicial + (aceleracao * instante);

  printf("Posição: %f, Velocidade: %f", posicao, velocidade);

  return 0;
}
