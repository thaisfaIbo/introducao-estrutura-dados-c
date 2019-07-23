#include <stdio.h>

void shift_string(char* s) {
  for (int i = 0; s[i] != '\0'; ++i) {
    if ((s[i] >= 'A' && s[i] < 'Z') || (s[i] >= 'a' && s[i] < 'z')) s[i]++;
    if (s[i] == 'z') s[i] = 'a';
    if (s[i] == 'Z') s[i] = 'A';
  }
}

int main(void) {
  char teste[] = "Casa";
  shift_string(teste);
  printf("%s\n", teste);
  return 0;
}
