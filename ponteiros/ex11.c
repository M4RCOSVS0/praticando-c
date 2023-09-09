#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[5] ={2,3,4,5,6};
    for (int i = 0; i < 5; i++)
    {
        if (vet[i]%2==0)
        {
            printf("%d\n",&vet[i]);
        }
        
    }
    

    return 0;
}