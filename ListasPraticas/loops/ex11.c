#include <stdio.h>

void imprimeLinhas(int n){
    for (int i = 1; i <= n; i++){
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
    
}

int main(){
    int n;
    scanf("%d", &n);
    imprimeLinhas(n);
    return 0;
}