#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#define TAM 20

typedef struct{
    char nome[TAM];
    float preco;
    int quantDias;
    int *dias;
}Evento;

void limpaStdin(){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

Evento* alocaEventos(int n){
    Evento *evento;
    evento = (Evento*) malloc(n * sizeof(Evento));
    if(evento == NULL){
        printf("Erro ao alocar memoria\n");
        exit(1);
    }
}

void preencheEventos(Evento *evento, int n){
    int i, j;
    for(i=0; i<n; i++){
        limpaStdin();
        printf("Digite o nome do evento %d:\n", i+1);
        fgets( (evento+i)->nome, TAM, stdin );
        strtok( (evento+i)->nome, "\n");
        //fgets(evento[i].nome, TAM, stdin);
        //strtok(evento[i].nome, "\n");

        printf("Digite o preco do evento %d:\n", i+1);
        //scanf("%f", &evento[i].preco);
        scanf("%f", &((evento+i)->preco) );

        printf("Quantos dias tem o evento?\n");
        //evento[i].quantDias;
        //(*(evento+i)).quantDias;
        //(evento+i)->quantDias;
        scanf("%d", &((evento+i)->quantDias) );

        (evento+i)->dias = (int*) malloc((evento+i)->quantDias * sizeof(int));
        if( (evento+i)->dias == NULL){
            exit(1);
        }

        printf("Digite os dias do evento %d:\n", i+1);
        for(j=0; j < (evento+i)->quantDias; j++){
            //scanf("%d", &evento[i].dias[j]);
            scanf("%d", &((evento+i)->dias[j] ) );
        }
    }
}

void imprimeEventos(Evento *evento, int n){
    int i, j;

    for(i=0; i<n; i++){
        printf("\nEvento %d: \n", i+1);
        //printf("%s\n", evento[i].nome);
        printf("%s\n", (evento+i)->nome );

        //printf("%f\n", evento[i].preco);
        printf("%f\n", (evento+i)->preco );

        printf("Os dias do evento: ");
        for(j=0; j < (evento+i)->quantDias; j++){
            //printf("%d ", evento[i].dias[j]);
            printf("%d ", (evento+i)->dias[j] );
        }
    }
}

void liberaMemoria(Evento *p){
    free(p);
}

int main (){
    Evento *evento;
    int n, i, j;

    printf("Digite quantos eventos deseja:\n");
    scanf("%d", &n);

    evento = alocaEventos(n);

    preencheEventos(evento, n);

    imprimeEventos(evento, n);

    liberaMemoria(evento);

	return 0;
}

