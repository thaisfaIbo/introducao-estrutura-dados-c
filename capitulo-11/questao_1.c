#include <string.h>

typedef struct funcionario Funcionario;

struct funcionario
{
    char nome[81];
    float valor_hora;
    int horas_mes;
};

Funcionario *busca(int tamanho_vetor, Funcionario **vetor, char *nome)
{
    int inicio = 0;
    int fim = tamanho_vetor - 1;

    while (inicio <= fim)
    {
        int meio = (inicio + fim) / 2;
        int comparacao = strcmp(nome, vetor[meio]->nome);

        if (comparacao < 0)
            fim = meio - 1;
        else if (comparacao > 0)
            inicio = meio + 1;
        else
            return vetor[meio];
    }

    return NULL;
}
