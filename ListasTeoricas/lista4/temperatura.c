#include <stdio.h>

/*void calculaTemp(){ ex1-a)
    int temp, celsius;
    printf("Digite a temperatura em Fahrenheit\n");
    scanf("%d", &temp);
    celsius = ((temp-32)/9)*5;
    printf("A temperatura em celsius eh %d\n",celsius);
}*/

int calculaTemp(){ //ex2-b)2
    int temp, celsius;
    printf("Digite a temperatura em Fahrenheit\n");
    scanf("%d", &temp);
    celsius = ((temp-32)/9)*5;
    return celsius;
}
int main(){
    int temperatura;
    temperatura = calculaTemp();
    printf("A temperatura em celsius eh de %d graus\n",temperatura);

    return 0;
}