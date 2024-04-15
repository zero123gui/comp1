#include <stdio.h>

typedef struct Pessoa
{
    char nome[15];
    char genero;
    int idade;
}Pessoa;

Pessoa pessoa[5];


void cadastrarPessoa(int i){
    printf("Digite o nome: ");
    scanf("%s", pessoa[i].nome);
    printf("\nDigite o genero: ");
    scanf(" %c", &pessoa[i].genero);
    printf("\nDigite a idade: ");
    scanf("%d", &pessoa[i].idade);
}

void imprimirMaiores(int i){
    for (int j = 0; j < i; j++){
        if (pessoa[j].idade >= 18){
            printf("%s;%c;%d\n", pessoa[j].nome, pessoa[j].genero, pessoa[j].idade);
        }
    }
}

void imprimirMenores(int i){
    for (int j = 0; j < i; j++){
        if (pessoa[j].idade < 18){
            printf("%s;%c;%d\n", pessoa[j].nome, pessoa[j].genero, pessoa[j].idade);
        }
    }
}

int main(){
    FILE *maior, *menor;
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
            cadastrarPessoa(i);
            i++;
            break;
        case 2:
            if (i==0){
                printf("Sem alunos cadastrados\n");
                return 1;
            } else imprimirMaiores(i);            
            break;
        case 3:
            if (i==0){
                printf("Sem alunos cadastrados\n");
                return 1;
            } else imprimirMenores(i);
            break;
        
        default:
            break;
        }
    }while (op!=0);

    for (int j = 0; j < i; j++)
    {
        if (pessoa[j].idade >= 18){
            fprintf(maior, "%s;%c;%d\n", pessoa[j].nome, pessoa[j].genero, pessoa[j].idade);
        } else if (pessoa[j].idade < 18){
            fprintf(menor, "%s;%c;%d\n", pessoa[j].nome, pessoa[j].genero, pessoa[j].idade);
        }
    }

    fclose(maior);
    fclose(menor);

    return 0;
}