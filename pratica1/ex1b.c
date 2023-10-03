#include <stdio.h>
#include <math.h>

float calculaConta(float a, float b){
    float conta, c1;
    c1 = a/b;
    conta = (c1)-((a+(pow(c1,2)))/(b-(pow(c1,2))));
    return conta;
}

int main(){
    float x, y, S;
    scanf("%f %f", &x, &y);
    S = calculaConta(x,y);
    printf("S eh: %.3f\n", S);
    //oie
    return 0;
}