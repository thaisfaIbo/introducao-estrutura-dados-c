// Questão 6
#include <stdio.h>

int main(void) {
  int a, b;

  printf("Digite o valor de a: ");
  scanf("%d", &a);

  printf("Digite o valor de b: ");
  scanf("%d", &b);

  if (a <= b && (a > 0 && b > 0)) {
    int sum = a + b;

    // Maneira 1
    /*for (int i = 1; i <= b; i++) {
      sum += (a + i) + (b - i);
    }*/

    // Maneira 2
    for (int i = b; i > 0; i--) {
      sum += (a + i) + (b - i);
    }

    printf("A somatória entre %d e %d é igual a %d\n", a, b, sum);
    return sum;
  }

  return 0;
}
