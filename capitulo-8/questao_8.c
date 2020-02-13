#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *aloca(size_t n) {
  void *p = malloc(n);
  if (!p) {
    perror("Erro");
    exit(1);
  }
  return p;
}

int letra(char c) { return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')); }

char *converte(char *s) {
  int len = strlen(s);
  char *convertido = (char *)aloca(len * sizeof(char));
  int novo_tamanho = 0;
  for (int i = 0; i < len; ++i) {
    if (letra(s[i])) {
      convertido[novo_tamanho] = s[i];
      novo_tamanho++;
    }
  }
  convertido = (char *)realloc(convertido, novo_tamanho * sizeof(char));
  return convertido;
}

int main(void) {
  char teste[] = "# Mat .:  39838-0  DC";
  char *convertido = converte(teste);
  printf("%s\n", convertido);
  return 0;
}
