#include <stdio.h>
#include <stdlib.h>
//usando fscanf
int main() {
    FILE *arq;
    char nome[20],texto[20];
    int i;
    float a;
    int result;
    arq = fopen("ArqGrav.txt","r");

    if (arq == NULL){
        printf("problemas na abertura do arquivo\n");
        system("pause");
        exit(1);
    }

    fscanf(arq,"%s%s",texto,nome);
    printf("%s %s\n",texto,nome);
    fscanf(arq,"%s %d",texto,&i);
    printf("%s %d\n",texto,i);
    fscanf(arq,"%s%f",texto, &a);
    printf("%s %f\n",texto,a);
    fclose(arq);


    return 0;
}