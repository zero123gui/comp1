#include <stdio.h>

void DigToHex(int x){
    char c = (char)x +55;
    printf("Caracter %c\n",c);
}

int main(){
    int x;
    printf("Digite um valor inteiro entre 10-15\n");
    scanf("%d", &x);
    DigToHex(x);
    return 0;
}