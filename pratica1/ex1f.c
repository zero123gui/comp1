#include <stdio.h>
#include <math.h>

double calculaFuncao(double a, double b){
    double resposta;
    resposta = log10(a+b);
    return resposta;
}

int main(){
    double x, y, resp;
    scanf("%lf %lf", &x, &y);
    resp = calculaFuncao(x,y);
    printf("O log eh: %.2lf\n", resp);
    return 0;
}