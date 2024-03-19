#include <stdio.h>

struct Cadastro{
    char nome[15];
    float preco;
    int dia[3];
};

void imprimeCadastro(struct Cadastro evento[]){
    int i, j;
    for (i = 0; i < 2; i++)
    {
        printf("Nome: %s\n", evento[i].nome);
        printf("Preco: %.2f\n", evento[i].preco);
        for (j = 0; j < 3; j++)
        {
            printf("Dia %d: %d\n", j, evento[i].dia[j]);
        }   
    }
}

int main(){
    struct Cadastro evento[2];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        printf("Digite o nome do evento: ");
        scanf("%s%*c", evento[i].nome);
        printf("\nDigite o preco: ");
        scanf("%f", &evento[i].preco);
        for (j = 0; j < 3; j++)
        {
            printf("\nDigite o dia do evento: \n");
            scanf("%d", &evento[i].dia[j]);
        }
    }
    imprimeCadastro(evento);
    
    return 0;
}