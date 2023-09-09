#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    printf("Digite o tamanho de uma string ");
    scanf("%d", &n);
    
    char *p = (char *)malloc(n * sizeof(char));

    printf("Digite uma palavra\n");
    scanf(" %[^\n]", p);
    
    int i = -1,j = 0;

    while (p[++i] != '\0'){
        if(!((toupper(p[i])=='A') || (toupper(p[i])=='E') ||(toupper(p[i])=='I') ||(toupper(p[i])=='O') || (toupper(p[i])=='U'))){
            p[j] = p[i];
            j++;
        }
    }

    p[j] = '\0';

    printf("A palavra digitada foi: %s", p);    
        
    free(p);

    return 0;
}