#include <stdio.h>
int a,b;

void troca(){
    int aux;
    aux = a;
    a = b;
    b = aux;
}

int main(){
    printf("Digite 2 valores\n");
    scanf("%d %d", &a, &b);
    troca();
    printf("A:%d e B:%d\n",a,b);
    return 0;
}