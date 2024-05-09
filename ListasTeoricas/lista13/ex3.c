#include <stdio.h>

int main(){

    int vet[5]={1,2,3,4,5}, *p;
    p = vet;

    printf("%d\n", p);
    printf("%d\n", &vet[1]);
    printf("%d\n", &p[0]);
    printf("%d\n", p[2]);
    printf("%d\n", p+2);
    printf("%d\n", *(p+2));
    printf("%d\n", --p);
    printf("%d\n", ++p);

    return 0;
}