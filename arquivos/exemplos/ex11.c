#include <stdio.h>
#include <stdlib.h>

int main() {
    int status;
    status = remove("ArqGrav.txt");
    if (status != 0){
        printf("Erro na remoção do arquivo. \n");
        system("pause");
        exit(1);
    }else{
        printf("Arquivo removido com sucesso! . \n");
    }
    
    
    return 0;
}