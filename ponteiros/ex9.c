#include <stdio.h>
#include <stdlib.h>

int main() {
    float mat[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("O endereco na linha %d e coluna %d eh %d\n",i,j,&mat[i][j]);
        }
        
    }
    
    return 0;
}