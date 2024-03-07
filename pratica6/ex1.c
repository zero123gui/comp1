#include <stdio.h>  
#include <string.h>
#define MAX 30

int main(){
    char nome[MAX];
    fgets(nome,30,stdin);
    int i;
    i = strlen(nome);
    while (i>=0)
    {
        printf("%c", nome[i]);
        i--;
    }
    
    return 0;
}