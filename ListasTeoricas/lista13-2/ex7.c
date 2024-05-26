#include <stdio.h>

int main(){

    char nome[5],*c;
    c=nome;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o char %d ",i);
        scanf(" %c", c+i);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%c",*(c+i));
    }

    printf("\n%c",*(c+4));
    
    

    return 0;
}