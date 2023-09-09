#include <stdio.h>
#include <stdlib.h>
//exemolo de fwrite
int main() {
 
    FILE *arq;
    arq = fopen("arqGrav.txt","w");
    char str[20] = "Hello World";
    float x = 5;
    int v[5] = {1,2,3,4,5};
    fwrite(str,sizeof(char),strlen(str),arq);
    fwrite(str,sizeof(char),5,arq);
    fwrite(&x,sizeof(float),1,arq);
    fwrite(v,sizeof(int),5,arq);
    fwrite(v,sizeof(int),2,arq);

    fclose(arq);
    
    return 0;
}