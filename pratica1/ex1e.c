#include <stdio.h>
#include <math.h>

void calculaFuncao(double a, double b, double c){
    double total;
    total = sqrt(c+sqrt(a+sqrt(4+sqrt(b))));
    printf("S eh: %lf\n",total);
}

int main() {
// Declara uma variável para armazenar o valor de e
double e = exp(3), pi = M_PI, x;
scanf("%lf", &x);
calculaFuncao(e, x, pi);
return 0;
}
