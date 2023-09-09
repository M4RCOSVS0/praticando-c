#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct alunos
{
    char nome[60];
    int matricula;
    float mediaFinal;
};

void lerValor(struct alunos a[10]){
    for (int i = 0; i < 10; i++){
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", a[i].nome);
        printf("Matricula: ");
        scanf("%d", &a[i].matricula);
        printf("Media Final: ");
        scanf("%f", &a[i].mediaFinal);
    }
}

int tamVetor(struct alunos a[10]){
    int p = 0;
    for (int i = 0; i < 10; i++){
        if(a[i].mediaFinal >= 5){
            p++;
        } 
    }
    return(p);
}

void separaApRp(struct alunos a[10],struct alunos ap[],struct alunos rp[]){
    int p = 0;
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
}

void listaAp(struct alunos ap[],int p){
    
    printf("Aprovados: \n");
    for(int i = 0; i < p; i++){
        printf("Nome: %s Matricula %d Media %f \n",ap[i].nome,ap[i].matricula,ap[i].mediaFinal);
    }
}

void listaRp(struct alunos rp[],int r){
    printf("Reprovados: \n");
    for(int i = 0; i < r; i++){
        printf("Nome: %s Matricula %d Media %f \n",rp[i].nome,rp[i].matricula,rp[i].mediaFinal);
    }

}
int main() {
    struct alunos a[10];

    lerValor(a);

    struct alunos ap[tamVetor(a)];
    struct alunos rp[abs(tamVetor(a) - 10)];

    separaApRp(a,ap,rp);
    listaAp(ap,tamVetor(a));
    listaRp(rp,abs(tamVetor(a) - 10));

    return 0;
}