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

char *retira_sufixo(char *s, int n) {
  int len = strlen(s);
  int novo_tamanho = len - n;
  char *r = (char *)aloca(novo_tamanho * sizeof(char));
  for (int i = 0; i < novo_tamanho; ++i) {
    r[i] = s[i];
  }
  return r;
}

int main(void) {
  char teste[] = "Rio de Janeiro";
  printf("%s\n", retira_sufixo(teste, 4));
  return 0;
}
