/*
 * Thaís Falbo - 2019
 * Script para pegar valores(inteiros ou reais) positivos
 * e exibir mensagem de erro quando não é válido
 */
#include <float.h>
#include <limits.h>
#include <stdio.h>

/*
 * UTILS
 */
static void limparBuffer(void) {
  char c;
  while ((c = getchar()) != EOF && c != '\n')
    ;
}

/*
 * FUNCTIONS
 */
int get_int(void) {
  int intNumber;

  int isSuccess = scanf("%d", &intNumber);

  while ((isSuccess != 1 || intNumber <= 0) ||
         (intNumber > INT_MAX || intNumber < INT_MIN)) {
    limparBuffer();
    printf("O número digitado é negativo ou igual a zero\n");
    printf("Por favor, digite um número válido: ");
    isSuccess = scanf("%d", &intNumber);
  }

  return intNumber;
}

double get_double(void) {
  double doubleNumber;

  int isSuccess = scanf("%lf", &doubleNumber);

  while ((isSuccess != 1 || doubleNumber <= 0.0) ||
         (doubleNumber > DBL_MAX || doubleNumber < DBL_MIN)) {
    limparBuffer();
    printf("O número digitado é negativo ou igual a zero\n");
    printf("Por favor, digite um número válido: ");
    isSuccess = scanf("%lf", &doubleNumber);
  }

  return doubleNumber;
}

float get_float(void) {
  float floatNumber;

  int isSuccess = scanf("%f", &floatNumber);

  while ((isSuccess != 1 || floatNumber <= 0.0f) ||
         (floatNumber > FLT_MAX || floatNumber < FLT_MIN)) {
    limparBuffer();
    printf("O número digitado é negativo ou igual a zero\n");
    printf("Por favor, digite um número válido: ");
    isSuccess = scanf("%f", &floatNumber);
  }

  return floatNumber;
}