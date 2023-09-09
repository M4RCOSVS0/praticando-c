#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa {
    char nome[100];
    char endereco[100];
    char telefone[20];
};

void ordenarPessoas(struct Pessoa pessoas[], int n) {
    int i, j;
    struct Pessoa temp;

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (strcmp(pessoas[j].nome, pessoas[j+1].nome) > 0) {
                temp = pessoas[j];
                pessoas[j] = pessoas[j+1];
                pessoas[j+1] = temp;
            }
        }
    }
}

int main() {
    struct Pessoa pessoas[5];
    int i;

    // Entrada dos dados
    printf("=== Cadastro de Pessoas ===\n");
    for (i = 0; i < 5; i++) {
        printf("Pessoa %d:\n", i+1);
        printf("Nome: ");
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        printf("Endereco: ");
        fgets(pessoas[i].endereco, sizeof(pessoas[i].endereco), stdin);
        printf("Telefone: ");
        fgets(pessoas[i].telefone, sizeof(pessoas[i].telefone), stdin);
    }

    // Ordenação das pessoas
    ordenarPessoas(pessoas, 5);

    // Impressão dos dados
    printf("\n=== Pessoas em Ordem Alfabética ===\n");
    for (i = 0; i < 5; i++) {
        printf("Pessoa %d:\n", i+1);
        printf("Nome: %s", pessoas[i].nome);
        printf("Endereco: %s", pessoas[i].endereco);
        printf("Telefone: %s", pessoas[i].telefone);
    }

    return 0;
}
