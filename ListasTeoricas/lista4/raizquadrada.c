#include <stdio.h>
#include <math.h>

void raizQuadrada(int x){
    int raiz;
    raiz = sqrt(x);
    printf("A raiz quadrada de %d eh %d\n", x, raiz);
}

int potenciaCubo(int x){
    int pot;
    pot = pow(x,3);
    return pot;
}

int main(){
    int valor, potencia;
    scanf("%d", &valor);
    raizQuadrada(valor);
    potencia = potenciaCubo(valor);
    printf("%d ao cubo eh: %d", valor, potencia);
    return 0;
}