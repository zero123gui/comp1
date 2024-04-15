#include <stdio.h>
#include <stdlib.h>

void calculaDuracao(int inicio, int fim){
    if(inicio == fim){
        printf("Tempo invalido\n");
    }else if(inicio < fim){
        printf("%d hrs\n",fim-inicio);
    }else printf("%d hrs\n",abs((24-inicio)+fim));
}

int main(){
    int inicio, fim;
    scanf("%d %d", &inicio, &fim);
    calculaDuracao(inicio, fim);
    return 0;
}