#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f;
    //Leitura do arquivo de Texto
    f= fopen("arquivo.txt","r");
    //Escrita do arquivo de Texto
    f= fopen("arquivo.txt","w");
    //Leitura de arquivo Bínario
    f= fopen("arquivo.txt","rb");
    //Escrita de arquivo Binário
    f= fopen("arquivo.txt","wb");
    return 0;
}