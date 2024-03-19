#include <stdio.h>
#include <string.h>

struct Cadastro{
    char nome[15];
    float preco;
    int dia[3];
};

void imprimeCadastro(struct Cadastro evento[], int qntd){
    int i, j;
    for (i = 0; i < qntd; i++)
    {
        printf("Nome: %s\n", evento[i].nome);
        printf("Preco: R$%.2f\n", evento[i].preco);
        for (j = 0; j < 3; j++)
        {
            printf("Dia %d: %d\n", j+1, evento[i].dia[j]);
        }   
    }
    printf("\n--------------------------\n");
}

int main(){
    struct Cadastro evento[10];
    int i, j, qntd;
    float precomaior = 0;
    char nomemaior[15];
    printf("Digite a quantidade de eventos\n");
    scanf("%d", &qntd);
    for (i = 0; i < qntd; i++)
    {
        printf("Digite o nome do evento: ");
        scanf("%s%*c", evento[i].nome);
        printf("\nDigite o preco: ");
        scanf("%f", &evento[i].preco);
        if (evento[i].preco > precomaior)
        {
            precomaior = evento[i].preco;
            strcpy(nomemaior,evento[i].nome);
        }
        
        for (j = 0; j < 3; j++)
        {
            printf("\nDigite o dia do evento: \n");
            scanf("%d", &evento[i].dia[j]);
            while (evento[i].dia[j]<1||evento[i].dia[j]>31)
            {
                scanf("%d", &evento[i].dia[j]);
            }
        }
    }

    imprimeCadastro(evento, qntd);
    printf("O evento mais caro eh: %s e custa R$%.2f\n",nomemaior,precomaior);
    
    return 0;
}