#include <ctype.h>
#include <stdio.h>
#include <string.h>

int conta_vogais(char *str) {
  int vowels = 0;
  for (int i = 0; i < strlen(str); ++i) {
    switch (tolower(str[i])) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      vowels++;
    }
  }
  return vowels;
}

int main(void) {
  char teste[] = "aeiou";
  printf("%d\n", conta_vogais(teste));
  return 0;
}
