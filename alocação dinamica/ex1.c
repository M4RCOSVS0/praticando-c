#include <stdio.h>
#include <math.h>

int converteParaDecimal(int n, int b) {
    int tamanho = log10(n) / log10(b) + 1;
    int vet[tamanho], soma = 0;

    for (int i = 0; i < tamanho; i++) {
        vet[i] = n % b;
        n /= b;
    }

    for (int i = 0; i < tamanho; i++) {
        soma += vet[i] * pow(b, i);
    }

    return soma;
}

int main() {
    int numHex = 1011212; // Número hexadecimal 1011212

    int numDecimal = converteParaDecimal(numHex, 16);
    float n = 3.4;
    printf("Número decimal: %d\n", (int) ceil((double)8/3));

    return 0;
}
