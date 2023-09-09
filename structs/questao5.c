#include <stdio.h>
#include <stdlib.h>

struct dados{
    int matricula;
    char nome[60];
    int codigo;
    float nota1, nota2;
};

float calcularmedia(float a,float b){
    return (a + b*2)/3;
}

int main() {
    int tam,bol=1;
    while (bol)
    {
        printf("digite a quantidade de alunos: ");
        scanf("%d",&tam);
        if (tam > 0 && tam < 10){
            bol = 0;
        }else{
            printf("\nnumero invalido!\n");
        }
    }
    struct dados d[tam];
    for (int i = 0; i < tam; i++)
    {
        printf("Digite o Nome do aluno ");
        scanf(" %[^\n]", d[i].nome);
        printf("Digite a matricula ");
        scanf("%d", &d[i].matricula);
        printf("digite o codigo da disciplina ");
        scanf("%d", &d[i].codigo);
        printf("digite as duas notas\n");
        scanf("%f%f",&d[i].nota1,&d[i].nota2);
    }

    for (int i = 0; i < tam; i++){
        printf("Aluno: %s\n", d[i].nome);
        printf("Matricula: %d\n", d[i].matricula);
        printf("Codigo da Disciplina: %d\n", d[i].codigo);
        printf("Media final: %.2f", calcularmedia(d[i].nota1,d[i].nota2));
    }


    return 0;
}
