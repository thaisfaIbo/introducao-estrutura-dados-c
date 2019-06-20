#include <stdio.h>

int main(void) {
  float p1, p2;
  printf("Programa para calcular a média de um aluno\n");

  printf("Digite a nota da P1: ");
  scanf("%f", &p1);

  printf("Digite a nota da P2: ");
  scanf("%f", &p2);

  float media = (p1 + p2) / 2.0;
  printf("Média Final: %.2f\n", media);
  
  // Verifica se media é acima de 5.0
  // e se a nota da p1 e p2 é maior do que 3.0
  if (media >= 5.0 && (p1 + p2 >= 6.0)) {
    printf("Aprovado\n");
  } else {
    float p3;
    printf("Prova final\n");
    
    printf("Digite a nota da P3: ");
    scanf("%f", &p3);

    float maiorNota = (p1 > p2) ? p1 : p2;

    media = (p3 + maiorNota) / 2.0;
    printf("Média Final: %.2f\n", media);

    if (media >= 5.0)
      printf("Aprovado\n");
    else
      printf("Reprovado\n");
  }

  return 0;
}
