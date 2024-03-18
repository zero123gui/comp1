#include "ex9.h"

void imprimePar(int par[], int j){
    for (int i = 0; i < j; i++)
    {
        printf("par[%d] = %d\n", i, par[i]);
    }
    
}

void imprimeImpar(int impar[], int k){
    for (int i = 0; i <k; i++)
    {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    
}