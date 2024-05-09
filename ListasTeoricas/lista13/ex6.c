#include <stdio.h>

int main(){

    int vet[3]={1,2,3}, *p;
    p = vet;
    p += 2;
    printf("%d",*p);


    return 0;
}