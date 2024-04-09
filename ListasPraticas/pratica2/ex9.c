#include <stdio.h>

int main(){
    int mes, ano, mesatual, anoatual, idade;
    scanf("%d %d %d %d", &mes, &ano, &mesatual, &anoatual);
    idade = anoatual - ano;
    if (mes > mesatual){
        idade -= 1;
    }
    printf("%d\n", idade);
    return 0;
}