#include <stdio.h>
#include <stdlib.h>
//movendo pelo arquivo
struct cadastro{
    char nome[20];
    char rua[20];
    int idade;
};
  
int main() {
    FILE *f = fopen("arquivo.txt","wb");

    struct cadastro c, cad[4] = {"Ricardo","rua 1",31,"Carlos","rua 2",28,"Ana","rua 3",45,"Bianca","rua 4",32};

    fwrite(cad,sizeof(struct cadastro),4,f);    
    fclose(f);

    f = fopen("arquivo.txt","rb");
    fseek(f,3*sizeof(struct cadastro), SEEK_SET);
    rewind(f);
    fread(&c,sizeof(struct cadastro),1,f);
    printf("%s\n%s\n%d\n",c.nome,c.rua,c.idade);
    fclose(f);
    
    return 0;
}