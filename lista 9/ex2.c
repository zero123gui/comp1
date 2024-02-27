#include <stdio.h>

int main(){
    int i = 0;
    char nome[10];
    for (int i = 0; i < 9; i++)
    {
        scanf(" %c", &nome[i]);
    }
    
    while (nome[i] != '\0'){
        printf("%c",nome[i]);
        i++;
    }
    return 0;
}