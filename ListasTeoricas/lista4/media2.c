#include <stdio.h>

float mediaAritimetica(float nota1, float nota2, float nota3, float nota4){
    float mA;
    mA = (nota1+nota2+nota3+nota4)/4;
    return mA;
}

float mediaHarmonica(float nota1, float nota2, float nota3, float nota4){
    float mH;
    mH = 4/((1/nota1)+(1/nota2)+(1/nota3)+(1/nota4));
    return mH;
}

int main(){
    float n1,n2,n3,n4, ariti, harmo;
    printf("Digite as 4 notas\n");
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    ariti = mediaAritimetica(n1,n2,n3,n4);
    harmo = mediaHarmonica(n1,n2,n3,n4);
    printf("Media aritimetica = %.3f\n", ariti);
    printf("Media harmonica = %.3f\n", harmo);
    return 0;
}