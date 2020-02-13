#include <stdio.h>
#define N 3

int identidade(double A[][N]) {
  for (int i = 0; i < N; ++i) {
    if (A[i][i] != 1.0)
      return 0;

    for (int j = 0; j < i; ++j)
      if (A[i][j] || A[j][i])
        return 0;
  }

  return 1;
}

int main(void) {
  double A[N][N] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
  identidade(A);
}
