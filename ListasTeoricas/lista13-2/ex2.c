#include <stdio.h>

void achaMaiorMenor (int *a, int *b, int *maior, int *menor){
    if (*a > *b){
        *maior = *a;
        *menor = *b;
    } else {
        *maior = *b;
        *menor = *a;
    }
}

int main(){
    int a, b, maior, menor;

    printf("Digite os valores de a e b: ");
    scanf("%d %d", &a, &b);

    if (a==b)
    {
        printf("Mesmo valor\n");
    }else
    {
        achaMaiorMenor(&a, &b, &maior, &menor);
    }

    printf("Maior = %d\nMenor = %d", maior, menor);

    return 0;
}