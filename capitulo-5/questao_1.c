#include <stdio.h>

int mdc(int num1, int num2);

int mdc(int num1, int num2) {
  int resto;
  while (num2 != 0) {
    resto = num1 % num2;
    num1 = num2;
    num2 = resto;
  }
  return num1;
}

int main(void) {
  int num1 = 23732;
  int num2 = 180;

  int mdcResultado = mdc(num1, num2);
  printf("MDC(%d, %d) = %d\n", num1, num2, mdcResultado);

  return 0;
}
