#include <stdio.h>

typedef struct Pets{
    int tipo;
    char sexo;
    char nome[20];
}Pets;

int contaPets(FILE *arq){
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
    rewind(arq);
    return pets;
}

void cadastraPets(FILE *arq, Pets pets[], int qnt){

    for (int i = 0; i < qnt; i++)
    {
        fscanf(arq, "%d;%c;%s", &pets[i].tipo,&pets[i].sexo,pets[i].nome);
    }
    rewind(arq);
}

int main(){
    FILE *fr;
    Pets pets[300];
    int quantidade;

    fr = fopen("pets.txt","r");
    if (!fr)
    {
        printf("Erro no arquivo\n");
        return 1;
    }

    quantidade = contaPets(fr);
    
    cadastraPets(fr,pets,quantidade);



    fclose(fr);

    return 0;
}