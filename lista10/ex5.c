#include <stdio.h>

typedef struct Filme{
    int codigo;
    char nome[30];
    int salas;
}Filme;

Filme cadastroFilme(Filme filme){
    printf("Digite o codigo do filme: ");
    scanf("%d%*c", &filme.codigo);
    printf("Digite o nome do filme: ");
    scanf("%[^\n]%*c", filme.nome);
    printf("Digite o numero da sala: ");
    scanf("%d%*c", &filme.salas);
    return filme;
}

void imprimeFilme(Filme filme){
    printf("Filme em cartaz: %s\n", filme.nome);
    printf("Codigo do filme: %d\n", filme.codigo);
    printf("Numero da sala: %d\n", filme.salas);
}

int main(){
    Filme filme[5];
    int qntd;
    printf("Digite a quantidade de filmes: ");
    scanf("%d%*c", &qntd);
    for (int i = 0; i < qntd; i++)
    {
        filme[i] = cadastroFilme(filme[i]);
        imprimeFilme(filme[i]);
    }
    

    return 0;
}