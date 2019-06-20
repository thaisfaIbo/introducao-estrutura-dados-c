#include <stdio.h>

int coeficiente(int n, int k);
int fatorial(int num);

int fatorial(int num) {
  if (num == 0)
    return 1;
  else
    return num * fatorial(num - 1);
}

int coeficiente(int n, int k) {
  if (n == k || k == 0)
    return 1;
  else if (n > k && n > 0 && k > 0)
    return coeficiente(n - 1, k) + coeficiente(n - 1, k - 1);
}

int main(void) {
  int x = coeficiente(1, 0);
  int y = coeficiente(1, 1);
  int z = coeficiente(2, 1);

  printf("K == 0: %d\n", x);
  printf("N == K: %d\n", y);
  printf("N > K: %d\n", z);

  return 0;
}
