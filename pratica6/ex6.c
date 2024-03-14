#include <stdio.h>
#include <string.h>
#define MAX 30

void contaLetras(char palavra[], int i){
    int j, cont =0;
    int tam= strlen(palavra);
    for ( j = i; j < tam; j++)
    {
        if (palavra[i]==palavra[j])
        {
            cont++;
        }
        
    }
    printf("a letra %c aparece %d vezes\n",palavra[i],cont);
}

int verificaRepeticao(char palavra[], int i){
    int flag = 0,j; 
    for ( j = 0; j < i; j++)
    {
        if (palavra[i] == palavra[j])
        {
            flag = 1;
            break;
        }
        
    }
    return flag;
}

int main(){
    char palavra[MAX];
    int i,tam;
    printf("Digite a palavra ");
    scanf("%s", palavra);
    tam = strlen(palavra);
    for ( i = 0; i < tam; i++)
    {
        if (!(verificaRepeticao(palavra,i)))
        {
            contaLetras(palavra,i);
        }
        
    }
    

    return 0;
}