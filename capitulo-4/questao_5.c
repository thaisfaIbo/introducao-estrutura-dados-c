#include <stdio.h>

int fibonacci(int termo);

int fibonacci(int termo) {
  if (termo == 0 || termo == 1)
    return termo;
  else
    return (fibonacci(termo - 1) + fibonacci(termo - 2));
}

int main(void) {
  printf("Programa para calcular Fibonacci de um termo\n");

  printf("Digite o valor do termo: ");
  int termo;
  scanf("%d", &termo);

  printf("Os termos de %d são:\n", termo);

  for (int i = 1; i <= termo; i++) {
    printf("%d ", fibonacci(i));
  }
  return 0;
}
