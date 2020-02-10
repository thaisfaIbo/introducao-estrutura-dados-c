#include <stdlib.h>
#include <stdio.h>

typedef struct pessoa Pessoa;

struct pessoa
{
  char nome[10];
  int dia, mes, ano;
};

static int compara_pessoa(const void *p1, const void *p2)
{
  Pessoa *info = (Pessoa *)p1;
  Pessoa **elem = (Pessoa **)p2;

  if ((*elem)->ano > info->ano)
    return 1;
  else if ((*elem)->ano < info->ano)
    return -1;
  else if ((*elem)->ano == info->ano)
    return 0;
}

Pessoa *busca(int tamanho_vetor, Pessoa **vetor, int dia, int mes, int ano)
{
  Pessoa info = {.dia = dia, .mes = mes, .ano = ano};
  return bsearch(&info, vetor, tamanho_vetor, sizeof(Pessoa *), compara_pessoa);
}
