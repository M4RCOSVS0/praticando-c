#include <stdio.h>
#include <stdlib.h>
//escrever uma string na tela
int main() {
    char str[20] ="Hello World!";
    int result;
    FILE *arq;
    arq = fopen("arqGrav.txt","w");
    if (arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
    
    result = fputs(str,arq);
    if (result == EOF)
    {
        printf("Erro na Gravacao");
    }    

    fclose(arq);
    
    return 0;
}