#include <stdio.h>

float calculaRacao(float gramas, float gatos){
    float restante;
    restante = gramas-(gatos*5);
    return restante;
}

void recebeValores(){
    float saco, quantidade, resto;
    scanf("%f %f", &saco, &quantidade);
    saco = saco*1000;
    quantidade = quantidade *2;
    resto = calculaRacao(saco, quantidade);
    if (resto >= 0)
    {
        printf("Eh suficiente\n");
    }else
    {
        printf("Naum da\n");
    }
    
    
    
}

int main(){
    recebeValores();
    return 0;
}