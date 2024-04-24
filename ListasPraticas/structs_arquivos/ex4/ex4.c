#include <stdio.h>

typedef struct Pessoa
{
    char nome[15];
    char genero;
    int idade;
}Pessoa;


void cadastrarPessoa(Pessoa pessoa[], int i){
    printf("Digite o nome: ");
    scanf("%s", pessoa[i].nome);
    printf("\nDigite o genero: ");
    scanf(" %c", &pessoa[i].genero);
    printf("\nDigite a idade: ");
    scanf("%d", &pessoa[i].idade);
}

void imprimirMaiores(Pessoa pessoa[],int i){
    for (int j = 0; j < i; j++){
        if (pessoa[j].idade >= 18){
            printf("%s;%c;%d\n", pessoa[j].nome, pessoa[j].genero, pessoa[j].idade);
        }
    }
}

void imprimirMenores(Pessoa pessoa[], int i){
    for (int j = 0; j < i; j++){
        if (pessoa[j].idade < 18){
            printf("%s;%c;%d\n", pessoa[j].nome, pessoa[j].genero, pessoa[j].idade);
        }
    }
}

void salvaArquivo(FILE *arq, int j, Pessoa pessoa[]){
    fprintf(arq, "%s;%c;%d\n", pessoa[j].nome, pessoa[j].genero, pessoa[j].idade);
}

int main(){
    FILE *maior, *menor;
    Pessoa pessoa[5];
    int op, i=0;

    maior = fopen("maioridade.txt","w");
    menor = fopen("menoridade.txt","w");
    if (maior == NULL || menor == NULL){
        printf("Deu erro\n");
        return 1;
    }

    do
    {
        printf("1 - Cadastrar Pessoas\n");
        printf("2 - Mostrar maiores de idade\n");
        printf("3 - Mostrar menores de idade\n");
        printf("0 - Sair\n");
        scanf("%d%*c", &op);

        switch (op)
        {
        case 1:
            cadastrarPessoa(pessoa,i);
            i++;
            break;
        case 2:
            if (i==0){
                printf("Sem alunos cadastrados\n");
                return 1;
            } else imprimirMaiores(pessoa,i);            
            break;
        case 3:
            if (i==0){
                printf("Sem alunos cadastrados\n");
                return 1;
            } else imprimirMenores(pessoa,i);
            break;
        
        default:
            break;
        }
    }while (op!=0);

    for (int j = 0; j < i; j++)
    {
        if (pessoa[j].idade >= 18){
            salvaArquivo(maior,j,pessoa);
        } else if (pessoa[j].idade < 18){
            salvaArquivo(menor,j,pessoa);
        }
    }

    fclose(maior);
    fclose(menor);

    return 0;
}