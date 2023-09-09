#include <stdio.h>
#include <stdlib.h>

struct dados
{
    char nome[60];
    int numMatricula;
    char curso[30];
    
};


int main() {
    struct dados d[5];
    for (int i = 0; i < 3; i++)
    {
        printf("digite o nome a matricula e o curso do aluno %d\n", i+1);
        scanf("%[^\n]", d[i].nome);
        scanf("%d", &d[i].numMatricula);
        scanf("%[^\n]", d[i].curso);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("dados: \nNome: %s\nMatricula %d\ncurso %s",d[i].nome,d[i].numMatricula,d[i].curso);
    }
    

    
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct alunos
{
    char nome[60];
    int matricula;
    float mediaFinal;
};

int tamVetor(struct alunos a[10],int copyp){
    for (int i = 0; i < 10; i++){
        copyp = (a[i].mediaFinal >= 5) ? copyp++ : copyp ;
    }
    return(copyp);
}

int main() {
    struct alunos a[10];
    int p=0;

    for (int i = 0; i < 10; i++){
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", a[i].nome);
        printf("Matrícula: ");
        scanf("%d", &a[i].matricula);
        printf("Média Final: ");
        scanf("%f", &a[i].mediaFinal);
    }

    p = tamVetor(a, p);
    
    struct alunos ap[p];
    struct alunos rp[abs(p-10)];

    p = 0;
    int r = 0;
    for (int i = 0; i < 10; i++){
        if (a[i].mediaFinal >= 5){
            ap[p].mediaFinal = a[i].mediaFinal;
            ap[p].matricula = a[i].matricula;
            strcpy(ap[p].nome, a[i].nome);
            p++;

        }else{

            rp[r].mediaFinal = a[i].mediaFinal;
            rp[r].matricula = a[i].matricula;
            strcpy(rp[r].nome, a[i].nome);
            r++;
        }
    }

    printf("Aprovados: \n");
    for(int i = 0; i < p; i++){
        printf("Nome: %s Matricula %d Media %f \n",ap[i].nome,ap[i].matricula,ap[i].mediaFinal);
    }

    printf("Reprovados: \n");
    for(int i = 0; i < r; i++){
        printf("Nome: %s Matricula %d Media %f \n",rp[i].nome,rp[i].matricula,rp[i].mediaFinal);
    }


    return 0;
}