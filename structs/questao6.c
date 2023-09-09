#include <stdio.h>
#include <stdlib.h>

struct registros
{
    char nome[60];
    int idade;
    char sexo;
    char cpf[60];
    char nascimento[60];
    int codigo;
    char ocupacao[30];
    float salario;
};

int main() {
    struct registros r;
    printf("digite o nome do funcionario\n");
    scanf(" %[^\n]", r.nome);
    printf("digite o idade do funcionario\n");
    scanf("%d", &r.idade);
    getchar();
    printf("digite o sexo do funcionario[M/F]\n");
    scanf("%c", &r.sexo);
    printf("digite o cpf do funcionario\n");
    scanf(" %[^\n]", r.cpf);
    printf("digite a data de nascimento do funcionario[ex. 01/01/2001 ]\n");
    scanf(" %[^\n]", r.nascimento);
    printf("digite o codigo\n");
    scanf("%d", &r.codigo);
    printf("digite a ocupacao do funcionario\n");
    scanf(" %[^\n]", r.ocupacao);
    printf("digite o salario do funcionario\n");
    scanf("%f", &r.salario);
    printf("O funcionario %s, que tem %d anos , do sexo %c quem tem o cpf, %s e nasceu no dia %s e tem o codigo %d, trabalha como %s e recebe um salario de %.2f",r.nome,r.idade,r.sexo,r.cpf, r.nascimento,r.codigo,r.ocupacao,r.salario);    
}