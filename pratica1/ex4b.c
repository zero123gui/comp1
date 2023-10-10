#include <stdio.h>

int transformaVar(int var){
    char x = (char)var + 48;
    return x;
}

int main(){
    char a;
    int var;
    printf("Digite um numero entre 0-9\n");
    scanf(" %d", &var);
    a = transformaVar(var);
    printf("%c\n", a);
    return 0;
}