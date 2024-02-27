#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
    int i = 0, op = 0;
    char nome[MAX];

    do{
        printf("digite algo\n");
        scanf("%s",nome);
        printf("Para continuar digite 1\n");
        printf("Para parar digite 0\n");
        scanf(" %d", &op);
    }while(op!=0);

    while (nome[i] != '\0'){
        printf("%c",nome[i]);
        i++;
    }
    return 0;
}