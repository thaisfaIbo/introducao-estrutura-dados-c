#include <stdio.h>

int testa_PA(int n, int* v) {
  int k;
  for (int i = 0; i < n; ++i) {
    k = v[i] - v[i - 1];
    if(v[i] != v[0] + (i * k))
      return 0;
  }
  return k;
}

int main(void) {
  int vetor[5] = {3, 6, 9, 12, 15};
  printf("%d\n", testa_PA(5, vetor));
}
