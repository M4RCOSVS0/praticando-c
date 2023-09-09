/*Fac¸a uma func¸ ˜ao que receba 3 n ´umeros inteiros como par ˆametro, representando horas,
minutos e segundos, e os converta em segundos*/
#include <stdio.h>
#include <stdlib.h>

int converte_segundos(int h,int m,int s){
    h *= 3600;
    m *= 60;
    return h + m + s;
}

int main() {
    int m = 40,h = 12,s = 40;
    printf("%d", converte_segundos(h,m,s));

    return 0;
}