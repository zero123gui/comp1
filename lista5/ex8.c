#include <stdio.h>
#include <math.h>

float calculaSoma(){
    float soma, x,y;
    printf("Digite os dois valores\n");
    scanf("%f %f", &x, &y);
    soma = x+y;
    return soma;
}

float calculaRaiz(){
    float x, result;
    printf("Digite o valor de x\n");
    scanf("%f", &x);
    result = sqrt(x);
    return result;
}

int main(){
    float op, resultado;
    printf("Menu de Opcoes:\n");
    printf("1 - Somar dois numeros\n");
    printf("2 - Calcular a raiz quadrada de um numero\n");
    printf("Digite a opcoes desejada:\n");
    scanf("%f", &op);
    if (op == 1){
        resultado = calculaSoma();
        printf("A soma eh %.f", resultado);
    }else if (op == 2){
        resultado = calculaRaiz();
        printf("Raiz: %.f\n", resultado);
    }
    
    
    
    return 0;
}