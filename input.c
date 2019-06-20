/*
 * Thaís Falbo - 2019
 * Script para pegar valores positivos
 * e exibir mensagem de erro quando não é válido
 * TODO: Refatorar código repetido
 */
#include <stdio.h>

int get_int() {
  // input    - o dito input do usuario
  // isNumber - usuario digitou um numero?
  // garbage  - coleta garbage characters como newline
  int intNumber, isNumber, garbage;

  isNumber = scanf("%d", &intNumber);

  while(isNumber != 1 || intNumber <= 0) {
    while((garbage = getchar()) != EOF && garbage != '\n');
    printf("O número digitado é negativo ou igual a zero\n");
    printf("Por favor, digite um número válido: ");
    isNumber = scanf("%d", &intNumber);
  }

  return intNumber;
}

double get_double() {
  int isNumber, garbage;
  double doubleNumber;

  isNumber = scanf("%lf", &doubleNumber);

  while(isNumber != 1 || doubleNumber <= 0.0) {
    while((garbage = getchar()) != EOF && garbage != '\n');
    printf("O número digitado é negativo ou igual a zero\n");
    printf("Por favor, digite um número válido: ");
    isNumber = scanf("%lf", &doubleNumber);
  }

  return doubleNumber;
}

float get_float() {
  float input = get_double();
  return input;
}