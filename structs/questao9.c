#include <stdio.h>
#include <stdlib.h>

struct carro{
    char marca[15];
    int ano;
    double preco;
};

int main() {
    struct carro c[5];
    for (int i = 0; i < 5; i++){
        printf("Digite a marca do carro %d : ",i+1);
        scanf(" %[^\n]", c[i].marca);
        printf("Digite o ano do carro %d : ",i+1);
        scanf(" %d", &c[i].ano);
        printf("Digite o preco do carro %d : ",i+1);
        scanf(" %lf", &c[i].preco);
    }
    double val;
    int bol = 1;
    int j = 0;
    while (bol)
    {
        printf("Quanto quer pagar?\n");
        scanf("%lf", &val);
        if (val == 0){
            bol = 0;
        }
        for (int i = 0; i < 5; i++){
            if (val > c[i].preco){
                printf("-----Opcao %d-------\n",++j);
                printf("marca do carro %s :",c[i].marca);
                printf("\no ano do carro %d :",c[i].ano);
                printf("\npreco do carro %lf :\n",c[i].preco);
            }    
        }
        j = 0;
    }
    
    
    return 0;
}