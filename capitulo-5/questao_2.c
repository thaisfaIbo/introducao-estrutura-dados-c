#include <stdio.h>
#include <math.h>
#include "../input.c"

int primo(int num);
void funcaoA(void);
void funcaoB(void);

// Função que determina se um número positivo é primo
// Retorna 1(true) ou 0(false)
int primo(int num) {
  if (num == 2) {
    return 1; // 2 é o único número par que é primo
  } else if (num < 2 || (num % 2) == 0) {
    return 0; // Número menores que 2 ou pares não são primos
  } else {
    // Se um número não é primo, pelo menos um dos seus
    // divisores é menor ou igual a sua raiz quadrada
    int lim = (int) sqrt(num);

    // O loop começa no 3 pq já testamos se é menor ou igual a 2
    // e o i é incrementado em 2 pq queremos números ímpares
    for (int i = 3; i <= lim; i += 2) {
      if (num % i == 0) {
        return 0; // O número não é primo
      }
    }

    return 1; // O número é primo
  }
}

void funcaoA(void) {
  printf("Números primos até o número X: ");
  int x = get_int();

  printf("Números primos menores que %d:\n", x);
  for (int i = 2; i < x; ++i) {
    if(primo(i)) {
      printf("%d\n", i);
    }
  }
}

void funcaoB(void) {
  printf("Primeiros N números primos: ");
  int n = get_int();

  printf("Os %d primeiros números primos:\n", n);
  int counter = 0;
  for (int i = 2; counter <= n; ++i) {
    if (primo(i)) {
      printf("%d\n", i);
      counter++;
    }
  }
}

int main(void) {
  printf("Digite números positivos inteiros para X e N\n");
  funcaoA();
  funcaoB();
  return 0;
}
