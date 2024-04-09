#include <stdio.h>
#define MAX 20
int main(){
    int i = 0;
    char nome[MAX]="guizinho";
    while (nome[i] != '\0'){
        printf("%c",nome[i]);
        i++;
    }
    return 0;
}