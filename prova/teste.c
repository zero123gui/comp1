#include <stdio.h>

int main(){
    int n=6,a=0,b=1,soma=1,aux;
    printf("0 ");
    for (aux = 1; aux < n; aux++){
        printf("%d ",soma);
        soma=a+b;
        a=b;
        b=soma;
    }
    
    return 0;
}