//Fac¸a uma func¸ ˜ao para verificar se um n ´umero ´e positivo ou negativo. Sendo que o valor
//de retorno ser ´a 1 se positivo, -1 se negativo e 0 se for igual a 0.

#include <stdio.h>
#include <stdlib.h>

void eoq(int *n){
    if(*n == 0){
        *n = 0;
    }else if(*n < 0){
        *n = -1;
    }else{
        *n = 1;
    }
    
}

int main() {
    int p,n,j;
    p = -4;
    n = 5;
    j = 0;
    eoq(&p);
    eoq(&n);
    eoq(&j);
    printf("%d %d %d",p,n,j);
    return 0;
}
