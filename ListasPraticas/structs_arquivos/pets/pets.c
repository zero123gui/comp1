#include <stdio.h>

void contaPets(FILE *arq){
    char caracter;
    int pets=0;
    while ((caracter = fgetc(arq))!=EOF)
    {
        if (caracter == '\n')
        {
            pets++;
        }
        
    }
    printf("Existem %d pets\n",pets);
}

int main(){
    FILE *fr;

    fr = fopen("pets.txt","r");
    if (!fr)
    {
        printf("Erro no arquivo\n");
        return 1;
    }

    contaPets(fr);
    
    fclose(fr);

    return 0;
}