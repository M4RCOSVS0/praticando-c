/*Fac¸a uma func¸ ˜ao para verificar se um n ´umero ´e um quadrado perfeito. Um quadrado
perfeito ´e um n ´umero inteiro n ˜ao negativo que pode ser expresso como o quadrado de
outro n ´umero inteiro. Ex: 1, 4, 9..*/

#include <stdio.h>
#include <stdlib.h>

void eperfeito(int n){
    int i = 0,c = 0;
    
    while (n >= c ){
        if (c*c == n){
            printf("E perfeito");
            i = 1;
        } 
        c++;
    }

    if (i == 0){
        printf("nao e perfeito!");

    } 
}

int main() {
    int k = 9;
    eperfeito(3);
    return 0;
}