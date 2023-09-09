#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,*p,par=0;
    printf("Digite o tamanho do vetor ");
    scanf("%d", &n);
    p = (int *) malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d",&p[i]);
        par = (p[i] % 2 == 0) ? par + 1 : par;
    }

    printf("tem %d pares e %d impares",par, abs(par-n));

    free(p);
    
    getchar();
    return 0;
}