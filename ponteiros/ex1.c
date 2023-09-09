#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1 = 3, *p1;
    float n2 = 5.6,*p2;
    char n3 = 'a',*p3;

    printf("%d\n", n1);
    printf("%f\n", n2);
    printf("%c\n", n3);

    p1 = &n1;
    p2 = &n2;
    p3 = &n3;
    
    *p1 = 4;
    *p2 = 8.9;
    *p3 = 'f';


    printf("%d\n", n1);
    printf("%f\n", n2);
    printf("%c\n", n3);


    return 0;
}