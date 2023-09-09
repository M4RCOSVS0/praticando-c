#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Include this header for toupper() function

int main() {
    FILE *f1, *f2;
    f1 = fopen("minusculo.txt", "r");
    f2 = fopen("maiusculo.txt", "w");
    if (f1 == NULL || f2 == NULL)
    {
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }
    
    char c = fgetc(f1);
    while (c != EOF)
    {
        fputc(toupper(c), f2); // Convert and write to "maiusculo.txt"
        c = fgetc(f1); // Read next character from "minusculo.txt"
    }
    
    fclose(f1);
    fclose(f2);
    system("pause");

    return 0;
}
