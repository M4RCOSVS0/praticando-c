#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite o tamanho do vetor ");
    scanf("%d", &n);
    int *p = (int *) malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d",&p[i]);
    }

    int x;
    printf("\ndigite um numero ");
    scanf("%d",&x);
    printf("Multiplos de %d contidos no vetor: ",x);
    for (int i = 0; i < n; i++) {
        if (p[i]%x==0){
            printf("%d ",p[i]);
        }
        
    }
    
    return 0;
}