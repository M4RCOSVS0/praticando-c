#include <stdio.h>
#include <stdlib.h>

int ordena3(int *a,int *b,int *c){
    int aux;
    if(*c<*b){
        aux = *c;
        *c = *b;
        *b = aux;
    }
    if (*b < *a){
        aux = *b;
        *b = *a;
        *a = aux;
    }
    if (*c < *b){
        aux = *c;
        *c = *b;
        *b = aux;
    }
    if (*a == *b && *a == *c){
        return 1;
    }else{
        return 0;
    }
    
}

int main() {
    int a= 30, b = 20, c = 10;
    printf("antes: %d %d %d",a,b,c);
    printf("\n%d",ordena3(&a,&b,&c));
    printf("\ndepois: %d %d %d",a,b,c);  
    return 0;
}