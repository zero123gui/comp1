#include <stdio.h>

void somaMaiores(int x, int y, int z){
    int soma, maior;
    if(x>y && x>z){
        maior = x;
        if(y>z){
            soma = maior+y;
        }else soma = maior+z;
        printf("A soma eh: %d", soma);
    }else if(y>x && y>z){
        maior = y;
        if(x>z){
            soma = maior+x;
        }else soma = maior+z;
        printf("A soma eh: %d", soma);
    }else if(z>x && z>y){
        maior = z;
        if(x>y){
            soma = maior+x;
        }else soma = maior+y;
        printf("A soma eh: %d", soma);
    }
    
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    somaMaiores(a,b,c);
    return 0;
}