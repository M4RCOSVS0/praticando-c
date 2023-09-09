#include <stdio.h>
#include <stdlib.h>

struct estoque
{
    int codigo;
    char nome[15];
    float preco;
    int quantidade;
};


int main() {
    struct estoque pedido[5];
    int cod,bol=1,qtd;
    while (bol){    
        printf("Digite o codigo do pedido: ");
        scanf(" %d", cod);
        printf("Digite a quantidade  : ");
        scanf(" %d", qtd);
        for (int i = 0; i < 5; i++){
            if (pedido[i].codigo == cod){
                if (pedido[i].quantidade > qtd){
                    pedido[i].quantidade - qtd;
                }else{
                    printf("pedido exede o estoque!\n");
                }
                if (pedido[i].quantidade == 0){
                    bol=0;
                }
                
            }
            
        }
        
    }
        
    return 0;
}