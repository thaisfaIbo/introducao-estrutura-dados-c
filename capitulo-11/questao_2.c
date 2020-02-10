#include <stdlib.h>

typedef struct pessoa Pessoa;

struct pessoa
{
  char nome[81];
  int dia, mes, ano;
};

static int compara_pessoa(const void *p1, const void *p2)
{
  Pessoa *info = (Pessoa *)p1;
  Pessoa **elem = (Pessoa **)p2;

  int ano = info->ano - (*elem)->ano;
  int mes = info->mes - (*elem)->mes;
  int dia = info->dia - (*elem)->dia;
  return (ano ? ano : (mes ? mes : dia));
}

Pessoa *busca(int tamanho_vetor, Pessoa **vetor, int dia, int mes, int ano)
{
  Pessoa info = {.dia = dia, .mes = mes, .ano = ano};
  return bsearch(&info, vetor, tamanho_vetor, sizeof(Pessoa *), compara_pessoa);
}
