#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1,n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    printf("O endereco de n1 eh %d e o de n2 e %d\n", &n1,&n2);
    printf("O conteudo e ");
    if (&n1 > &n2){
        printf("%d", n1);
    }else{
        printf("%d", n2);
    }
    
    return 0;
}