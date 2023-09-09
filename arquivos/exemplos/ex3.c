#include <stdio.h>
#include <stdlib.h>
//usando EOF
int main() {
    FILE *arq;
    char c;
    arq = fopen("arquivo.txt","r");
    if (arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
    
    //lê até acabar o ultimo caracter
    while ((c = fgetc(arq)) != EOF)
    {
        printf("%c",c);
    }
    

    fclose(arq);
    
    return 0;
}