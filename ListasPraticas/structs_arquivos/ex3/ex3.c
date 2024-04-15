#include <stdio.h>

typedef struct Pessoa
{
    char nome[15];
    char genero;
    int idade;
}Pessoa;


int main(){
    FILE *maior, *menor;
    Pessoa pessoa[5];
    int op=1, i=0;
    while (op){
        printf("Digite o nome: ");
        scanf("%[^\n]%*c", pessoa[i].nome);
        printf("\nDigite o genero: ");
        scanf(" %c", &pessoa[i].genero);
        printf("\nDigite a idade: ");
        scanf("%d", &pessoa[i].idade);

        printf("Quer continuar 1/0\n");
        scanf("%d%*c", &op);
        i++;
    }
    
    maior = fopen("maioridade.txt","w");
    menor = fopen("menoridade.txt","w");
    if (maior == NULL || menor == NULL){
        printf("Deu erro\n");
        return 1;
    }
    

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