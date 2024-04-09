#include "ex9.h"

int main(){
    int x, j=0, k=0, impar[5], par[5];
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &x);
        if (x%2==0)
        {
            par[j] = x;
            j++;
        }else {
            impar[k] = x;
            k++;
        }
        if (k==5 || i==14)
        {
            imprimeImpar(impar, k);
            k=0;
        }
        if (j==5 || i==14)
        {
            imprimePar(par, j);
            j=0;
        }
    }
    
    return 0;
}