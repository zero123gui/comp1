#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[10];
    float price;
    int *days;
    int qntdDias;
}Cadastro;

void imprimeEventos(Cadastro *evento, int n){
    int i,j;

    for ( i = 0; i < n; i++)
    {
        printf("Nome do evento: %s\n", evento[i].name);
        printf("Preco do evento: %.2f\n",evento[i].price);
        for ( j = 0; j < evento[i].qntdDias; j++)
        {
            printf("Dia %d\n", evento[i].days[j]);
        }
    }

}

void liberaMemoria(Cadastro *evento, int n) {
    for (int i = 0; i < n; i++) {
        free(evento[i].days);
    }
    free(evento);
}

Cadastro* alocaEventos(int n){
    Cadastro *evento;
    evento = (Cadastro*) malloc(n * sizeof(Cadastro));
    if (evento==NULL)
    {
        printf("erro de memoria");
        exit(1);
    }
    return evento;
}

void preencheEventos(Cadastro *evento, int n){
    int i,j;

    for ( i = 0; i < n; i++)
    {
        printf("\nDigite o nome do evento: ");
        scanf("%s", evento[i].name);

        printf("\nDigite o preco do evento: ");
        scanf("%f", &evento[i].price);

        printf("\nDigite quantos dias de evento: ");
        scanf("%d", &evento[i].qntdDias);

        evento[i].days = (int*) malloc(evento[i].qntdDias * sizeof(int));
        if (evento[i].days == NULL)
        {
            exit(1);
        }
        
        printf("\nDigite os %d dias do evento: ", evento[i].qntdDias);
        for ( j = 0; j < evento[i].qntdDias; j++)
        {
            scanf("%d", &evento[i].days[j]);
        }
    }
    
}

int main(){
    Cadastro *evento;
    int n;

    printf("Digite a quantidade de eventos: ");
    scanf("%d", &n);

    evento = alocaEventos(n);

    preencheEventos(evento, n);
    
    imprimeEventos(evento, n);

    liberaMemoria(evento, n);

    return 0;
}