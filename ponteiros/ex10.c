#include <stdio.h>

#define SIZE 5

void doubleValues(int *array, int size) {
    int *ptr = array;  // ponteiro para o início do array
    
    for (int i = 0; i < size; i++) {
        *ptr *= 2;  // dobrar o valor apontado por ptr
        ptr++;  // avançar para o próximo elemento do array
    }
}

int main() {
    int array[SIZE];
    
    printf("Digite %d valores:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &array[i]);
    }
    
    doubleValues(array, SIZE);
    
    printf("Valores dobrados:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}
