#include <stdlib.h>
#include <stdio.h>

struct cadastro
{
    char endereco[30];
    char nome[30];
    int idade;
};


void main(){
    struct cadastro cad;
    printf("Digite os dados de uma pessoa: nome, idade e endereco\n");
    scanf(" %[^\n]", cad.nome);
    scanf("%d", &cad.idade);
    scanf(" %[^\n]", cad.endereco);
    
    printf("Cadastro:\nNome: %s  \nIdade: %d \nEndereco %s",cad.nome,cad.idade,cad.endereco);
    
    
    
    return 0;
}