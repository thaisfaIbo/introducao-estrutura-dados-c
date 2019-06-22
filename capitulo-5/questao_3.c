#include <stdio.h>
#include "../input.c"

int fib(int num);
void funcaoA(int n, int x, int *pertence);
void funcaoB(int x, int pertence);

int fib(int num) {
  if (num < 2) {
    return num;
  } else {
    int termo1 = 0;
    int termo2 = 1;
    int resultado;

    for (int i = 2; i <= num; ++i) {
      resultado = termo1 + termo2;
      termo1 = termo2;
      termo2 = resultado;
    }

    return resultado;
  }
}

void funcaoA(int n, int x, int *pertence) {
  for (int i = 0; i < n; ++i) {
    int termo = fib(i);
    printf("%d ", termo);

    if(termo == x)
      *pertence = 1;
  }
}

void funcaoB(int x, int pertence) {
  if (pertence)
    printf("\nO valor %d pertence à série\n", x);
  else
    printf("\nO valor %d não pertence à série\n", x);
}

int main(void) {
  int pertence = 0;
  int n = get_int();
  int x = get_int();
  funcaoA(n, x, &pertence);
  funcaoB(x, pertence);
}
