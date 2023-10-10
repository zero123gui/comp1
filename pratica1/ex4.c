#include <stdio.h>

int transformaVar(char a){
    int x = (int)a - 48;
    return x;
}

int main(){
    char a;
    int var;
    printf("Digite um numero entre 0-9\n");
    scanf(" %c", &a);
    var = transformaVar(a);
    printf("%d\n", var);
    return 0;
}