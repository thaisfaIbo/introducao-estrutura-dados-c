#include <stdio.h>

void minusculo(char* str) {
  for (int i = 0; str[i] != '\0'; ++i)
    if ((str[i] >= 'A') && (str[i] <= 'Z') )
      str[i] += 'a' - 'A';
}

int main(void) {
  char teste[] = "AMOR";
  minusculo(teste);
  printf("%s\n", teste);
  return 0;
}
