#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* retornames(int mes) {
    static char matriz[12][20];
    strcpy(matriz[0], "janeiro");
    strcpy(matriz[1], "fevereiro");
    strcpy(matriz[2], "março");
    strcpy(matriz[3], "abril");
    strcpy(matriz[4], "maio");
    strcpy(matriz[5], "junho");
    strcpy(matriz[6], "julho");
    strcpy(matriz[7], "agosto");
    strcpy(matriz[8], "setembro");
    strcpy(matriz[9], "outubro");
    strcpy(matriz[10], "novembro");
    strcpy(matriz[11], "dezembro");
    if(mes > 0 && mes <= 12){
        return matriz[mes-1];
    }else
    {
        printf("Mes invalido!");
    }
    
    
}

int main() {
    int dia;
    int mes, ano;
    printf("Digite a data: ");
    scanf("%d %d %d", &dia, &mes, &ano);
    char* mesc = retornames(mes);
    printf("%d %s %d",dia, mesc,ano);
    return 0;
}
