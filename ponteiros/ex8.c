#include <stdio.h>
#include <stdlib.h>

int main() {
    float vet[10];
    for (int i = 0; i < 10; i++){
        printf("O endereco da posicao %d e %d\n",i, &vet[i]);
    }
    
    return 0;
}