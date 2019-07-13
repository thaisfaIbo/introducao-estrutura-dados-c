#include <stdio.h>
#define N 3

int triangular_inferior(double A[][N]) {
  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      if(A[i][j] != 0)
        return 0;
    }
  }
  return 1;
}

int main(void) {
  double A[N][N] = {{1, 0, 0},
                    {1, 2, 0},
                    {1, 2, 3}};
  triangular_inferior(A);
}
