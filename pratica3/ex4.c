#include <stdio.h>

int somaImpares(int x, int y){
    int soma=0;
    if (x==y){
        soma = 0;
    }else if(x>y){
        int i=y;
        while(i<x){
        if(i%2){
            soma+=i;
        }
        i++;
    }
    }else{
        int i=x;
        while(i<y){
        if(i%2){
            soma+=i;
        }
        i++;
    }
    }
    return soma;
}

int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%d\n",somaImpares(x,y));
    return 0;
}