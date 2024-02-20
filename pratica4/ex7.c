#include <stdio.h>

int main(){
    int V[1000],T;
    printf("Digite um valor T entre 2 e 50\n");
    scanf("%d", &T);
    for (int i = 0; i < 1000; i++)
    {       
        V[i] = i%T;
        printf("V[%d] = %d ", i, V[i]);
    }
    
    return 0;
}