#include <stdio.h>

int main(void) {
  printf("Programa para calcular o litro de gasolina no Brasil se aqui fosse "
         "adotado o mesmo preço cobrado nos Estados Unidos\n");

  double precoGalaoUSA, taxaConversao;

  printf("Digite o preço do galão nos Estados Unidos: ");
  scanf("%lf", &precoGalaoUSA);

  printf("Digite a taxa de conversão do Dólar Americano para o Real: ");
  scanf("%lf", &taxaConversao);

  double litrosGalao = 3.7854;

  double precoLitroUSA = precoGalaoUSA / litrosGalao;
  double precoLitroBR = precoLitroUSA * taxaConversao;

  printf("O preço do litro é: %.2f\n", precoLitroBR);

  return 0;
}
