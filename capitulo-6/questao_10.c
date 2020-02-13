#include <stdio.h>

void histograma(int n, float *v, int *h) {
  for (int i = 0; i < n; i++) {
    int x = 10 * v[i];
    h[x]++;
  }
}

int main(void) {
  float v[12] = {0.11,  0.2,  0.03,   0.56,  0.323, 0.345,
                 0.234, 0.56, 0.6546, 0.123, 0.123, 0.999};

  // Cria array de 10 valores com valor 0
  int h[10];
  for (int i = 0; i < 10; ++i)
    h[i] = 0;

  histograma(12, v, h); // {1, 3, 2, 2, 0, 2, 1, 0, 0, 1}

  for (int i = 0; i < 10; ++i)
    printf("%d\n", h[i]);

  return 0;
}
