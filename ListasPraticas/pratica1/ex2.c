#include <stdio.h>
#include <math.h>

float raizMais(float a, float b, float c){
    float x1;
    x1 = (-b + sqrt((b*b) - (4*a*c)))/2*a;
    return x1;
}

float raizMenos(float a, float b, float c){
    float x2;
    x2 = (-b - sqrt((b*b) - (4*a*c)))/2*a;
    return x2;
}

int main(){
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    float raiz1 = raizMais(a,b,c);
    float raiz2 = raizMenos(a,b,c);
    printf("X1 eh: %.2f e X2 eh: %.2f\n", raiz1, raiz2);
    return 0;
}