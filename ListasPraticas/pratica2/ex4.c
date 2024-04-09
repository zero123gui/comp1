#include <stdio.h>

void calculaPreco(float morangos, float macas){
    float pesototal, precototal,precomorangos, precomacas, valor;  
    pesototal = morangos + macas;
    
    if(morangos < 5){
        precomorangos = morangos * 2.5;
    }else precomorangos = morangos * 2.2;
    
    if(macas < 5){
        precomacas = macas * 1.8;
    }else precomacas = macas * 1.5;
    
    precototal = precomacas + precomorangos;
    
    if(pesototal > 8 || precototal > 25){
        valor = precototal * 0.9;
        printf("O cliente devera pagar: %.2f",valor);
    }else printf("O cliente devera pagar: %.2f", precototal);
    
}

int main(){
    float morangos, macas;
    scanf("%f %f", &morangos, &macas);
    calculaPreco(morangos, macas);
    return 0;
}