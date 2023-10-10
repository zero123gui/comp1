#include <stdio.h>

void HexToDig(char c){
    int x = (int)c - 55;
    printf("Digito %d\n",x);
}

int main(){
    char c;
    printf("Digite um valor hex A-F\n");
    scanf(" %c", &c);
    HexToDig(c);
    return 0;
}