#include <stdio.h>
#include <stdlib.h>
//escrevendo
int main() {
    FILE *arq;
    arq = fopen("arquivo.txt","w");// abrindo um rquivo
    char string[100];
    int i;
    //se naõ existe ARQ retornara NULL
    if (arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
    printf("Entre com a string a ser gravada no arquivo: ");
    gets(string);
    //grava um caracter por vez
    for (int i = 0; i < strlen(string); i++) {
        fputc(string[i],arq);
        //fputc(' ',arq);
    }

    fclose(arq);//fechando um arquivo
    
    return 0;
}