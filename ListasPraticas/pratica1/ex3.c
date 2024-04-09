#include <stdio.h>
#include <math.h>

float calculaArea(float a, float b, float c, float p){
    float resultado;
    resultado = sqrt(p*(p-a)*(p-b)*(p-c));
    return resultado;
}

int main(){
    float a,b,c,p, area;
    scanf("%f %f %f", &a, &b, &c);
    p = (a+b+c)/2;
    area = calculaArea(a,b,c,p);
    printf("A area do triangulo eh %f\n", area);
    return 0;
}