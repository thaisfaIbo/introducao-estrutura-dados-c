#include <stdio.h>

void string_oposta(char *str) {
  for (int i = 0; str[i] != '\0'; ++i)
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] = 'z' - str[i] + 'a';
    else if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] = 'Z' - str[i] + 'A';
}

int main(void) {
  char teste[] = "ABC";
  string_oposta(teste);
  printf("%s\n", teste);
  return 0;
}
