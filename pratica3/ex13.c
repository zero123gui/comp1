#include <stdio.h>

void funcao1(){
    int i=0, j=1, k, n;
    scanf("%d", &n);
    while(n<2 || n>46){
        scanf("%d", &n);
    }
    
    printf("0 1 ");
    n=n-2;
    while(n--){
        k=i+j;
        i=j;
        j=k;
        printf("%d ", k);
    }
    
}

int main(){
    funcao1();
    return 0;
}