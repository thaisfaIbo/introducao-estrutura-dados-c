#include <math.h>
#include <stdio.h>

int raizes(double a, double b, double c, double *px1, double *px2);

int raizes(double a, double b, double c, double *px1, double *px2) {
  double delta = (b * b) - (4 * a * c);

  if (delta < 0) {
    return 0;
  } else if (delta == 0.0) {
    *px1 = -b / (2 * a);
    return 1;
  } else {
    delta = sqrt(delta);
    *px1 = (-b - delta) / (2 * a);
    *px2 = (-b + delta) / (2 * a);
    return 2;
  }
}

int main(void) {
  double a, b, c, px1, px2;

  printf("Entre com os coeficientes (a b c): ");
  scanf("%lf %lf %lf", &a, &b, &c);

  int totalRaizes = raizes(a, b, c, &px1, &px2);

  switch (totalRaizes) {
  case 0:
    printf("Raízes reais inexistentes.\n");
    break;
  case 1:
    printf("Uma raiz real: %.2f\n", px1);
    break;
  case 2:
    printf("Duas raízes reais: %.2f  %.2f\n", px1, px2);
    break;
  }

  return 0;
}
