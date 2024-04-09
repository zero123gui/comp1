#include <stdio.h>

void calculaResto(int n){
    int i=0;
    while(i<1000){
        if(i%n==2){
            printf("%d\n",i);
        }
        i++;
    }
}

int main(){
    int n;
    printf("Digite um numero n\n");
    scanf("%d", &n);
    calculaResto(n);
    return 0;
}