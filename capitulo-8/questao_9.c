#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void* aloca(size_t n) {
  void *p = malloc(n);
  if (!p) {
    perror("Erro");
    exit(1);
  }
  return p;
}

char *concatena(char *s1, char *s2, char sep)
{
  char *r = (char *) aloca(strlen(s1) + strlen(s2) + 1);
  if (r) {
    char *t = r;
    while (*t++ = *s1++) ;
    *(t - 1) = sep;
    while (*t++ = *s2++) ;
  }
  return r;
}

int main(void) {
  char s1[] = "ex";
  char s2[] = "aluno";
  char sep = '-';
  char* str = concatena(s1, s2, sep);
  printf("%s\n", str);
  return 0;
}
