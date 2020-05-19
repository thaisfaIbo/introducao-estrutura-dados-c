#include <stdio.h>

#include "matriz.h"

static Matriz *mat_transp(Matriz *mat) {
  int lin = mat_colunas(mat);
  int col = mat_linhas(mat);

  Matriz *tp = mat_cria(lin, col);

  for (int i = 0; i < lin; i++) {
    for (int j = 0; j < col; j++) {
      float x = mat_acessa(mat, j, i);
      mat_atribui(tp, i, j, x);
    }
  }

  return tp;
}
