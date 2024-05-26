#include <stdio.h>

//declaracao da funcao de achar o maior_menor
void min_max(int *t, int *maior, int *menor){

    *maior = 0;
    *menor = *(t);
    for (int i = 0; i < 3; i++)
    {
        if (*(t+i) > *maior)
        {
            *maior = *(t+i);
        }
        if (*(t+i) < *menor)
        {
            *menor = *(t+i);
        }
    }
}

int main(){
    //declaracao de variaveis
    int vet[3]={10,5,13}, maior, menor;

    //chamada da função
    min_max(vet, &maior, &menor);

    //impressao dos valores de maior e menor
    printf("Maior = %d\nMenor = %d", maior, menor);

    return 0;
}