#include <stdio.h>

typedef struct Pessoa
{
    char nome[15];
    char genero;
    int idade;
}Pessoa;


void cadastraPessoa(Pessoa pessoa[],int i){

    printf("Digite o nome: ");
    scanf("%[^\n]%*c", pessoa[i].nome);

    printf("\nDigite o genero: ");
    scanf(" %c", &pessoa[i].genero);
    
    printf("\nDigite a idade: ");
    scanf("%d", &pessoa[i].idade);
}

void salvaArquivo(FILE *arq, int j, Pessoa pessoa[]){
    fprintf(arq, "%s;%c;%d\n", pessoa[j].nome, pessoa[j].genero, pessoa[j].idade);
}

int main(){
    FILE *maior, *menor;
    Pessoa pessoa[5];

    int op=1, i=0;

    //menu de cadastro
    while (op){
        cadastraPessoa(pessoa,i);
        printf("Quer continuar 1/0\n");

        scanf("%d%*c", &op);
        i++;
    }
    
    //Abertura e verificaçao dos arquivos
    maior = fopen("maioridade.txt","w");
    menor = fopen("menoridade.txt","w");
    if (maior == NULL || menor == NULL){
        printf("Deu erro\n");
        return 1;
    }
    
    //salva as pessoas cadastradas no arquivo
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