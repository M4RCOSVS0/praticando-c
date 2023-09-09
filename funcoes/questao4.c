/*Fac¸a uma func¸ ˜ao e um programa de teste para o c ´alculo do volume de uma esfera.
Sendo que o raio ´e passado por par ˆametro.
V = 4/3 ∗ π ∗ R*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int volume(float r){
    return 4/3 * M_PI * pow(r,3);
}

int main() {
    printf("o volume e %d",volume(3));

    return 0;
}
