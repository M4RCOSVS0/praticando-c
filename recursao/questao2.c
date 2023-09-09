#include <stdio.h>
#include <stdlib.h>

int fatorial (int n){
    if(n == 0){
        return 1;
    }else{
        return n * fatorial(n-1);
    }
}

int MultipRec(int n1,int n2){
    if(n2 == 0){
        return 0;
    }else{
        return n1 + MultipRec(n1,n2-1);
    }
}

void imprimenum(int n1){
    if(n1 < 0){
        return;
    }else{
        printf("%d\n", n1);
        imprimenum(n1-1); 
    }
}

void imprimenump(int n1){
    if(n1 < 0){
        return;
    }else{
        imprimenump(n1-1);
        if (n1 % 2 == 0){
            printf("%d\n", n1);
        }         
    }
        
}

int main() {
    printf("O fatorial de %d eh ",fatorial(5));
    printf("O fatorial de %d eh ",MultipRec(8,2));
    imprimenum(6);
    imprimenump(7);

    return 0;
}