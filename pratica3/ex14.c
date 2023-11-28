#include <stdio.h>

void funcao1(){
    float S=0;
    for(int i = 1; i <= 100; i++){
        S = S + (float)1/i;
    }
    printf("%.2f\n",S);
}

int main(){
    funcao1();
    return 0;
}