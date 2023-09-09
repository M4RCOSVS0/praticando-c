#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite o tamanho da memória ");
    scanf("%d", &n);
    int *p = (int *) calloc(n,sizeof(int));
    int op,bol = 1,num,valor,i;
    char opc;
    while (bol){
        printf("O que deseja fazer?\n1- inserir um valor em determinada posicao\n2 -consultar o valor contido em determinada posicao\n3- sair\n");
        scanf("%d", &op);
        switch (op){
        case 1:
            while (1){
                printf("onde deseja inserir um numero?\n");
                scanf("%d", &num);
                if (num > n){
                    printf("Valor não existe na memoria! tente novamente...");
                }else{
                    break;
                }
            }
            if (p[num] != 0){
                printf("Já existe um valor aqui deseja sobrepor?[s/n]");
                scanf(" %[^\n]", opc);  
            }

            if (p[num] == 0 || opc == 's'){
                printf("Digite o valor q deseja por na memoria de posicao %d",num);
                scanf("%d", &valor);
                p[num] = valor;
            }
            
            break;
        case 2:
            printf("digite a posicao que quer consultar: ");
            scanf("%d", &i);
            printf("Na posição %d da memoria contem %d",i,p[i]);
            break;
        default:
            bol = 0;
            break;
        }
    }
    
    return 0;
}