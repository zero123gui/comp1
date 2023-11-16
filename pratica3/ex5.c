#include <stdio.h>

void funcao1(){
    int i=1, x, maior, pos=1;
    scanf("%d",&x);
    maior = x;
    while(i<10){
        scanf("%d",&x);
        if(x > maior){
            maior = x;
            pos=i+1;
        }i++;
    }
    printf("Maior Valor: %d\nPosicao: %d", maior, pos);
}

int main(){
    funcao1();
    return 0;
}