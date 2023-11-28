#include <stdio.h>

void funcao1(){
    float s=0;
    int aux=1;
    for (int i = 1; i <= 3; i+=2){
        s = s + (float)i/aux;
        aux = aux * 2;
    }
    printf("%.2f",s);
    
}

int main(){
    funcao1();
    return 0;
}