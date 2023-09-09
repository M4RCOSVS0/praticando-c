#include <stdio.h>
#include <stdlib.h>

struct matricula
{
    int matAluno;
    char nome[60];
    float nota1,nota2,nota3;
};


int main() {
    float maiorNota1,mediageral[5],maiormedia,menormedia;
    int linkn1=0,linkmaior=0,linkmenor=0;
    struct matricula m[5];
    maiorNota1 = 0;
    menormedia = 10;
    maiormedia = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("digite os dados do aluno: \nnome: ");
        scanf(" %[^\n]", m[i].nome);
        printf("matricula: ");
        scanf(" %d", &m[i].matAluno);
        printf("as 3 notas:\n",m[i].nota1,m[i].nota2,m[i].nota3);
        scanf("%f%f%f",&m[i].nota1,&m[i].nota2,&m[i].nota3);
        mediageral[i] = (m[i].nota1 + m[i].nota2 + m[i].nota3)/3;
        maiormedia = mediageral[0];
        if(m[i].nota1 > maiorNota1){
            maiorNota1 = m[i].nota1;
            linkn1 = i;
        }
        if (mediageral[i]> maiormedia)
        {
            maiormedia = mediageral[i];
            linkmaior = i;
        }
        if (mediageral[i]< menormedia)
        {
            menormedia = mediageral[i];
            linkmenor = i;
        }
        
    }

    printf("\nA maior nota 1 e %.2f e quem tirou foi %s", maiorNota1,m[linkn1].nome);
    printf("\nA maior media e %.2f e quem tirou foi %s", maiormedia,m[linkmaior].nome);
    printf("\nA menor media e %.2f e quem tirou foi %s", menormedia,m[linkmenor].nome);

    for (int i = 0; i < 5; i++)
    {
        printf("\nO aluno %s foi ",m[i].nome);
        if (mediageral[i]>=6){
            printf("aprovado!!!");
        }else{
            printf("reprovado");
        }
        
    }
    

    return 0;
}