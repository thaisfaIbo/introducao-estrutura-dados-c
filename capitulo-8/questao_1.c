#include <stdio.h>

int conta_ocorrencia(char *s, char c) {
  int counter = 0;
  for (int i = 0; s[i] != '\0'; ++i)
    if (s[i] == c)
      counter++;
  return counter;
}

int main(void) {
  char str[] = "Rio de Janeiro";
  printf("%d\n", conta_ocorrencia(str, 'i'));
  return 0;
}
