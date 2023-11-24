#include <stdio.h>

void funcao(){
    int x, i=1;
    scanf("%d", &x);
    while (x!=0){
        while (i<=x){
            printf("%d ",i);
            i++;
        }
        printf("\n");
        i=1;
        scanf("%d", &x);
    }
    
}

int main(){
    funcao();
    return 0;
}