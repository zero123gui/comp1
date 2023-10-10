#include <stdio.h>
#include <math.h>

int main(){
    float x, resultado, y;
    scanf("%f", &x);
    y = log(10);
    resultado = (log(x)/y)+1;
    printf("%.f\n", resultado);
    return 0;
}