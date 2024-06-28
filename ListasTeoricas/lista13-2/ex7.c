#include <stdio.h>

int main(){
<<<<<<< HEAD
    int *p, vet[5]={1,2,3,4,5};
    p = vet;
=======

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
    
    
>>>>>>> 119691dc18415b24b3e3c06b84068f874b6a3f0e

    return 0;
}