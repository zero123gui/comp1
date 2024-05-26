#include <stdio.h>


void min_max(int *t){

    int maior = 0, menor = *(t);
    for (int i = 0; i < 3; i++)
    {
        if (*(t+i) > maior)
        {
            maior = *(t+i);
        }
        if (*(t+i) < menor)
        {
            menor = *(t+i);
        }
    }
    printf("Maior = %d\nMenor = %d", maior, menor);
}

int main(){
    int vet[3]={10,5,13};
    min_max(vet);

    return 0;
}