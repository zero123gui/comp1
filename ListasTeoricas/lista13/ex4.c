#include <stdio.h>

int main(){

    int vet[3]={1,2,3}, *p;
    p=vet;
    for (int i = 0; i < 3; i++){
        printf("%d ", vet[i]);
    }
    
    for (int i = 0; i < 3; i++){
        *(p+i) = i+3;
    }

    for (int i = 0; i < 3; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}