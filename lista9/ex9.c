#include <stdio.h>
#define MAX 10

void imprimeNomes(char name[][MAX], int age[], int qnt){
    for (int i = 0; i < qnt; i++)
    {
        printf("Nome = %s %d anos\n",name[i],age[i]);
    }
    
}

int main(){
    char nomes[MAX][MAX];
    int op, i=0, idades[MAX];
    do
    {
        printf("Digite a o nome e a idade\n");
        scanf("%s %d", nomes[i], &idades[i]);
        printf("Digite 1 para continuar\n");
        scanf("%d", &op);
        i++;
    } while (op==1);
    imprimeNomes(nomes,idades,i);
    

    return 0;
}