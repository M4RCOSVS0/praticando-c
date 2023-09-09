#include <stdio.h>
#include <stdlib.h>

int somatorio(int n){
    if( n == 1){
        printf(" %d", n);
        return 1;
    }else{
        printf(" %d +", n);
        return n + somatorio(n-1);
    }
}

int main() {
    printf("\nO valor do somatorio de n e %d", somatorio(4));
    return 0;
    
}