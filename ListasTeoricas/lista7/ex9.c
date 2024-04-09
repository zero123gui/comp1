#include <stdio.h>

void funcao1(float vet[]){
    float v1[10],v2[10];
    int j=0,k=0;
    for (int i = 0; i < 10; i++){
        if (vet[i]>=0){
            v1[j] = vet[i];
            j++;
        }else {
            v2[k] = vet[i];
            k++;
        }
    }
    for (int i = 0; i < j; i++){
        printf("v1[%d] eh %.1f\n", i, v1[i]);
    }
    for (int i = 0; i < k; i++){
        printf("v2[%d] eh %.1f\n", i, v2[i]);
    }
}

int main(){
    float vet[10]={-7.5, 8.1, 0, -49.3, 2.9, 33.5, -65.0, -21.9, 9.3, -51.7};
    funcao1(vet);
    return 0;
}