#include <stdio.h>

void mediaAritimetica(float nota1, float nota2, float nota3, float nota4){
    float mA;
    mA = (nota1+nota2+nota3+nota4)/4;
    printf("A media aritmetica eh: %f\n",mA);
}

void mediaHarmonica(float nota1, float nota2, float nota3, float nota4){
    float mH;
    mH = 4/((1/nota1)+(1/nota2)+(1/nota3)+(1/nota4));
    printf("A media harmonica eh: %.4f\n", mH);
}

int main(){
    float n1,n2,n3,n4;
    printf("Digite as 4 notas\n");
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    mediaAritimetica(n1,n2,n3,n4);
    mediaHarmonica(n1,n2,n3,n4);
    return 0;
}