#include <stdio.h>
#include <stdlib.h>

int main() {
    int* vetor = NULL; // Ponteiro para o vetor dinâmico
    int tamanho = 0;   // Tamanho inicial do vetor
    int numero;

    printf("Digite os números (digite um número negativo para encerrar):\n");

    while (1) {
        scanf("%d", &numero);

        // Verifica se o usuário digitou um número negativo para encerrar
        if (numero < 0)
            break;

        // Realoca o vetor para aumentar o tamanho e armazenar o novo número
        tamanho++;
        int* temp = (int*)realloc(vetor, tamanho * sizeof(int));

        if (temp == NULL) {
            printf("Erro na realocação de memória.\n");
            free(vetor); // Libera a memória alocada antes de sair do programa
            return 1;
        }

        vetor = temp;
        vetor[tamanho - 1] = numero; // Armazena o novo número no último elemento do vetor
    }

    // Imprime o vetor lido
    printf("Vetor lido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Libera a memória alocada para o vetor antes de sair do programa
    free(vetor);

    return 0;
}