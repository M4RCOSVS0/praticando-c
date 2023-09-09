#include <stdio.h>
#include <stdlib.h>

void trocavalor (int *n1,int *n2){
    *n1 += *n2;
}

int main() {
    int n1,n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    printf("n1 vale %d e n2 vale %d", n1,n2);
    trocavalor(&n1,&n2);
    printf("\nA soma das variaveis  eh %d",n1);
    return 0;
}