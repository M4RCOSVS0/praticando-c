#include <stdio.h>
#include <stdlib.h>
//lendo no arquivo
int main() {
    FILE *arq;
    char c;
    arq = fopen("arquivo.txt","r");//'r'eader leitura
    if (arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
    
    //le caracter por caracter
    for (int i = 0; i < 20; i++) {
        c = fgetc(arq);
        printf("%c",c);
    }

    fclose(arq);
    
    return 0;
}