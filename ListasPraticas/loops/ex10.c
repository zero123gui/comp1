#include <stdio.h>

void funcao1(int n){
    int i, j=1;
    for (i = 1; i <= n; i++){
        for (; j <= i*4; j+=4){
            printf("%d %d %d PIMBA\n", j, j+1, j+2);
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    funcao1(n);
    return 0;
}