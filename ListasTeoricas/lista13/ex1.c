#include <stdio.h>

void trocaValores(int *x, int *y){
    int aux;
    aux = *y;
    *y = *x;
    *x = aux;
}

int main(){

    int a=5, b=10;
    printf("a = %d b = %d\n", a, b);
    trocaValores(&a, &b);
    printf("a = %d b = %d\n", a, b);

    return 0;
}