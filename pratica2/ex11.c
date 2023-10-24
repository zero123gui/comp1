#include <stdio.h>

void verificaAno(int ano){
    if(ano%400 == 0){
        printf("Ano bissexto\n");
    }else if(ano%4 == 0 && ano%100 != 0){
        printf("Ano bissexto\n");
    }else printf("Nao eh bissexto\n");
}

int main(){
    int ano;
    scanf("%d", &ano);
    verificaAno(ano);
    return 0;
}