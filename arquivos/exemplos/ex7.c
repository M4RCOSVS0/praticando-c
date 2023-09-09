#include <stdio.h>
#include <stdlib.h>
//exemplo da função fread
int main() {
    FILE *arq;
    char str1[20],str2[20];
    float x;
    int i, v1[5],v2[2];
    
    fread(str1,sizeof(char),12,arq);
    str1[12] = '\0';
    printf("%s\n",str1);

    fread(str1,sizeof(char),5,arq);
    str2[5] = '\0';
    printf("%s\n",str2);
    
    fread(&x,sizeof(float),1,arq);
    printf("%f\n",x);

    fread(v1,sizeof(int),5,arq);
    for (i = 0; i < 5; i++)
    {
        printf("v1[%d] = %d\n",i,v1[i]);
    }

    fread(v2,sizeof(int),2,arq);
    for (i = 0; i < 2; i++)
    {
        printf("v1[%d] = %d\n",i,v1[i]);
    }

    fclose(arq);

    return 0;
}