#include <stdio.h>

float calculaCusto(float qnt){
    float valor;
    valor = (qnt >= 12) ? qnt*3.0:qnt*3.5;
    return valor;
}

int main(){
    float quantidade, total;
    scanf("%f", &quantidade);
    total = calculaCusto(quantidade);
    printf("%.2f", total);
    return 0;
}