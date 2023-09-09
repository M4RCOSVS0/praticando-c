#include <stdio.h>
#include <stdlib.h>

int main() {

    int n=0,*p = NULL;
    int loto[] = {1,2,3,4,5,7},ticket[] = {1,2,3,8,4,5};
    

   

    
    int tamanho = 0;

    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            if(ticket[i] == loto[j]){
                tamanho++;
                p = realloc(p, sizeof(int) * tamanho);
                p[tamanho - 1] = ticket[i];
            }
        }
    }

    for(int i = 0; i < tamanho; ++i){
        printf("%d ", p[i]);
    }

}