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

void separaSexo(FILE *f1, FILE *f2, Pets pets[], int qnt){

    for (int i = 0; i < qnt; i++)
    {
        if (pets[i].sexo == 'm')
        {
            fprintf(f1, "%d %s\n", pets[i].tipo, pets[i].nome);
        } else {
            fprintf(f2, "%d %s\n", pets[i].tipo, pets[i].nome);
        }
    }
    rewind(f1);
    rewind(f2);
}


int main(){
    FILE *fr,*f1,*f2;
    Pets pets[300];
    int quantidade;

    fr = fopen("pets.txt","r");
    f1 = fopen("machos.txt","w+");
    f2 = fopen("femeas.txt","w+");
    if (!fr){
        printf("Erro no arquivo\n");
        return 1;
    }

    quantidade = contaPets(fr);
    
    cadastraPets(fr, pets, quantidade);

    separaSexo(f1, f2, pets, quantidade);

    fclose(fr);
    fclose(f1);
    fclose(f2);

    return 0;
}