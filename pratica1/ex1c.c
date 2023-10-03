#include <stdio.h>
#include <math.h>

float calculaTotal(float a){
    float total;
    total = 1+(1/sqrt(a))+(1/(pow(a,(1/4))))+(1/(pow(a,(1/8))));
    return total;
}

int main(){
    float x,resultado;
    scanf("%f", &x);
    resultado = calculaTotal(x);
    printf("resultado eh: %.4f\n", resultado);
    return 0;
}