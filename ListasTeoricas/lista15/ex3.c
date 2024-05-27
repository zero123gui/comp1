#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[10];
    float price;
    int days[2];
}Cadastro;

void imprimeEventos(Cadastro *evento, int dias){

    printf("Nome do evento: %s\n", evento->name);
    printf("Preco do evento: %.2f\n",evento->price);
    for (int i = 0; i < dias; i++)
    {
        printf("Dia %d\n", evento->days[i]);
    }

}

void liberaMemoria(Cadastro *evento){
    free(evento);
}

int main(){
    Cadastro *evento;
    int n, i, j, dias=2;

    printf("Digite a quantidade de eventos: ");
    scanf("%d", &n);

    evento = (Cadastro*) malloc(n * sizeof(Cadastro));
    if (evento==NULL)
    {
        printf("erro de memoria");
        exit(1);
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("\nDigite o nome do evento: ");
        scanf("%s", evento[i].name);
        printf("\nDigite o preco do evento: ");
        scanf("%f", &evento[i].price);
        printf("\nDigite os 2 dias do evento: ");
        for ( j = 0; j < 2; j++)
        {
            scanf("%d", &evento[i].days[j]);
        }
    }

    for ( i = 0; i < n; i++)
    {
        imprimeEventos((evento+i), dias);
    }

    for ( i = 0; i < n; i++)
    {
        liberaMemoria((evento+i));
    }
    

    return 0;
}