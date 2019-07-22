#include <stdio.h>

void shift_string(char* str) {
  for (int i = 0; str[i] != '\0'; ++i) {
    if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i]<= 'z')) {
      if (str[i] == 'z')
        str[i] = 'a';
      else if (str[i] == 'Z')
        str[i] = 'A';
      else
        str[i]++;
    }
  }
}

int main(void) {
  char teste[] = "Casa";
  shift_string(teste);
  printf("%s\n", teste);
  return 0;
}
