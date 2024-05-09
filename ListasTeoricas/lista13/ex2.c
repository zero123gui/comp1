#include <stdio.h>

void achaMaiorMenor (int *a, int *b, int *maior, int *menor){
    if (*a>*b){
        *maior = *a;
        *menor = *b;
    }else {
        *maior = *b;
        *menor = *a;
    }
}

int main(){
    int x=10, y=5, maior, menor;
    achaMaiorMenor(&x, &y, &maior, &menor);
    printf("Maior: %d\nMenor: %d", maior, menor);


    return 0;
}