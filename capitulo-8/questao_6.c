#include <stdio.h>
#include <string.h>

void roda_string(char* str) {
  int len = strlen(str);

  if (len > 0) {
    char lastChar = str[len - 1];

    for (int i = len - 1; i > 0; --i)
      str[i] = str[i - 1];

    str[0] = lastChar;
  }
}

int main(void) {
  char teste[] = "casam";
  roda_string(teste);
  printf("%s\n", teste);
  return 0;
}
