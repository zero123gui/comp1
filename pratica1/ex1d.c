#include <stdio.h>
#include <math.h>

float calculaTotal(float x, float y, float z){
    float total;
    total = (sqrt(pow(y,2)-(4*x*z)))/(2*x);
    return total;
}

int main(){
    int a,b,c,S;
    S = calculaTotal;
    printf("%f\n", S);
    return 0;
}