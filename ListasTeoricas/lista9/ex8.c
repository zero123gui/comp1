#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30

int main(){
    char produtos[MAX][MAX];
    int quantidade;
    printf("Digite quantos produtos deseja adicionar\n");
    scanf("%d ", &quantidade);
    for (int i = 0; i < quantidade; i++)
    {
        fgets(produtos[i],MAX,stdin);
        strtok(produtos[i],"\n");
    }
    printf("Lista de produtos\n");
    for (int i = 0; i < quantidade; i++)
    {
        printf("Produto %d = %s\n",i+1,produtos[i]);
    }

    return 0;
}