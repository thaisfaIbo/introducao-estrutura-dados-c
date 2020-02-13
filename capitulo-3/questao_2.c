#include <stdio.h>

int main(void) {
  int num1, num2, num3;

  printf("Digite 3 números inteiros, separados por espaço: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  int maior =
      (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

  int mediano =
      (num1 < num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

  int menor =
      (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);

  printf("Números em ordem crescente: %d %d %d\n", menor, mediano, maior);

  return 0;
}
