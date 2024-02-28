#include <stdio.h>
#define MAX 10

int main(){
    char produtos[MAX][MAX];
    int quantidade;
    printf("Digite quantos produtos deseja adicionar\n");
    scanf("%d", &quantidade);
    for (int i = 0; i < quantidade; i++)
    {
        scanf("%s",produtos[i]);
    }
    printf("Lista de produtos\n");
    for (int i = 0; i < quantidade; i++)
    {
        printf("Produto %d = %s\n",i+1,produtos[i]);
    }

    return 0;
}