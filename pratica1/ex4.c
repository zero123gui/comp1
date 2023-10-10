#include <stdio.h>

int main(){
    char a;
    printf("Digite um numero entre 0-9\n");
    scanf("%c", &a);
    int x = (int)a -48;
    printf("%d",x);
    return 0;
}