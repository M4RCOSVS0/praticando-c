#include <stdio.h>
#include <stdlib.h>
//ler uma string na tela
int main() {
    char str[20];
    int *result;
    FILE *arq;
    arq = fopen("arqGrav.txt","r");
    if (arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
    
    result = fgets(str,13,arq);
    if (result == NULL)
    {
        printf("Erro na Leitura");
    }else
    {
        printf("%s",str);
    }

    fclose(arq);
    
    return 0;
}