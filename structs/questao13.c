#include <stdio.h>
#include <stdlib.h>

typedef struct endereco
{
    char rua[15];
    char estado[15];
    char bairro[15];
    char cidade[15];
    char estado[15];
    int cep;
}endereco;

struct cadastro
{
    char nome[60];
    endereco meuEndereco;
    float salario;
    int identidade;
    int cpf;
    char estadocivil;
    int telefone;
    int idade;
    char sexo;
};



int main() {
    struct cadastro cad[5];
    int maisIdade;
    int homens[5] = {0};
    int maisQmil[5] = {0};
    char bol;
    for (int i = 0; i < 5; i++) {
        printf("Digite os dados para o cadastro %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", cad[i].nome);

        printf("Rua: ");
        scanf("%s", cad[i].meuEndereco.rua);

        printf("Estado: ");
        scanf("%s", cad[i].meuEndereco.estado);

        printf("Bairro: ");
        scanf("%s", cad[i].meuEndereco.bairro);

        printf("Cidade: ");
        scanf("%s", cad[i].meuEndereco.cidade);

        printf("CEP: ");
        scanf("%d", &cad[i].meuEndereco.cep);

        printf("Salário: ");
        scanf("%f", &cad[i].salario);
        if (cad[i].salario > 1000)
        {
            maisQmil[i] = i;
        }else{
            maisQmil[i] = -1;
        }
        
        printf("Identidade: ");
        scanf("%d", &cad[i].identidade);

        printf("CPF: ");
        scanf("%d", &cad[i].cpf);

        printf("Estado Civil: [C - casado /S - solteiro /V - viuvo /D - divorciado");

        scanf(" %c", &cad[i].estadocivil);

        printf("Telefone: ");
        scanf("%d", &cad[i].telefone);

        printf("Idade: ");
        scanf("%d", &cad[i].idade);
        if (cad[i].idade > maisIdade)
        {
            maisIdade = cad[i].idade;
        }
        
        printf("Sexo: [M/F]");
        scanf(" %c", &cad[i].sexo);
        if (cad[i].sexo == 'm' || cad[i].sexo == 'M'){
            homens[i] = i;
        }else{
            homens[i] = -1;
        }
        printf("\n");

    }

    do
    {
        int id;
        printf("digite um numero: ");
        scanf("%d", &id);
        for (int i = 0; i < 5; i++) {
            if (id == cad[i].identidade){
                printf("Dados da pessoa com identidade %d:\n", id);
                printf("Nome: %s\n", cad[i].nome);
                printf("Idade: %d\n", cad[i].idade);
                printf("Sexo: %c\n", cad[i].sexo);
            }
        }
        printf("Deseja continuar? [S/N]");
        scanf("%c",&bol);
    } while (bol == 'S' || bol == 's');
    
    printf("Pessoa com maior idade entre os cadastrados:\n");
    for (int i = 0; i < 5; i++) {
        if (cad[i].idade == maisIdade) {
            printf("Nome: %s\n", cad[i].nome);
            printf("Idade: %d\n", cad[i].idade);
        }
    }

    printf("Pessoas do sexo masculino:\n");
    for (int i = 0; i < 5; i++) {
        if (homens[i] != -1) {
            printf("Nome: %s\n", cad[homens[i]].nome);
            printf("Sexo: %c\n", cad[homens[i]].sexo);
        }
    }

    printf("Pessoas com salário maior que 1000:\n");
    for (int i = 0; i < 5; i++) {
        if (maisQmil[i] != -1) {
            printf("Nome: %s\n", cad[maisQmil[i]].nome);
            printf("Salário: %.2f\n", cad[maisQmil[i]].salario);
        }
    }

    return 0;
}