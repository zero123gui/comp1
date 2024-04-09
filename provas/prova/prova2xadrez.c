#include <stdio.h>

int main(){
    int inicio,fim;
    printf("Digite a hora de inicio\n");
    scanf("%d", &inicio);
    printf("Digite a hora de fim\n");
    scanf("%d",&fim);
    if (inicio == fim){
        printf("O jogo naum pode durar mais de 23 horas\n");
    }else if (inicio < fim){
        printf("A duracao do jogo foi de %d horas\n", fim-inicio);
    }else printf("A duracao do jogo foi de %d horas\n", fim+24-inicio);
    return 0;
}