#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float calculaRaiz(float a, float b){
    float raizAB, potA, potB;
    potA = pow(a,2);
    potB = pow(b,3);
    raizAB = sqrt((potA+potB));
    return raizAB;
}

float calculaMod(float a, float b){
    float modAB, soma;
    soma = a+b;
    modAB = abs(soma);
    return modAB;
}

int main(){
    float x,y, raiz, modulo, S;
    printf("Digite os valores de x e y\n");
    scanf("%f %f", &x, &y);
    raiz = calculaRaiz(x,y);
    modulo = calculaMod(x,y);
    printf("A raiz deles eh: %.3f\n", raiz);
    printf("O modulo deles eh: %f\n", modulo);
    S = raiz/modulo;
    printf("S eh: %f\n",S);
    return 0;
}