#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
    int i = 0;
    char nome[MAX];
    fgets(nome,MAX,stdin);
    strtok(nome,"\n");
    while (nome[i] != '\0'){
        printf("%c",nome[i]);
        i++;
    }
    return 0;
}