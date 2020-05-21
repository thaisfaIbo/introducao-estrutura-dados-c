#include "str_din.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

struct strdin {
  int nmax;  // dimensão do vetor
  char* v;   // vetor de cadeia de caracteres, ou seja, string
};

static void realoca(StrDin* sd, int n) {
  // Define novo tamanho do vetor
  if (n >= sd->nmax) {
    sd->nmax = MAX(n, 2 * sd->nmax);
  else
    sd->nmax /= 2;

  // Redimensiona com espaço adicional para o caractere '\0'
  char* novo_vetor = (char*)realloc(sd->v, sd->nmax + 1);

  if (novo_vetor != NULL) {
    sd->v = novo_vetor;
  } else {
    perror("Erro na realocação de memória");
    exit(EXIT_FAILURE);
  }
};

StrDin* sd_criavazia(void) { return sd_criacopia(""); };

StrDin* sd_criacopia(const char* s) {
  StrDin* sd = (StrDin*)malloc(sizeof(StrDin));

  if (!sd) {
    perror("Erro na alocação de memória");
    exit(EXIT_FAILURE);
  }

  sd->nmax = 0;
  sd->v = NULL;
  sd_atribui(sd, s);
  return sd;
};

void sd_atribui(StrDin* sd, const char* s) {
  realoca(sd, strlen(s));
  strcpy(sd->v, s);
};

void sd_concatena(StrDin* sd, const char* s) {
  realoca(sd, strlen(sd->v) + strlen(s));
  strcat(sd->v, s);
};

const char* sd_acessa(StrDin* sd) { return sd->v; };

void sd_libera(StrDin* sd) {
  free(sd->v);
  free(sd);
};

void sd_redimensiona(StrDin* sd) {
  // Define novo tamanho como tamanho atual do vetor
  sd->nmax = strlen(sd->v);

  // Redimensiona com espaço adicional para o caractere '\0'
  char* novo_vetor = (char*)realloc(sd->v, sd->nmax + 1);

  if (!novo_vetor != NULL) {
    sd->v = novo_vetor;
  } else {
    perror("Erro na realocação de memória");
    exit(EXIT_FAILURE);
  }
};
