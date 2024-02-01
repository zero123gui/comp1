#include <stdio.h>

int main(){
    int V[8] = {4,85,9,18,30,18,67,10};
    int x;
    printf("Digite um numero\n");
    scanf("%d", &x);
    for (int i = 0; i <= 7; i++){
        if (x == V[i]){
            printf("Existe no vetor, na posicao %d\n",i+1);
        }    
    }
    
    return 0;
}