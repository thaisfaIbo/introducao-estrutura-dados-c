#ifndef MATRIZ_H
#define MATRIZ_H

typedef struct matriz Matriz;

Matriz* mat_cria(int linhas, int colunas);
void mat_libera(Matriz* mat);
float mat_acessa(Matriz* mat, int linha, int coluna);
void mat_atribui(Matriz* mat, int linha, int coluna, float valor);
int mat_linhas(Matriz* mat);
int mat_colunas(Matriz* mat);

#endif
