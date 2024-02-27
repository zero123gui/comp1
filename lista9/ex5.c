#include <stdio.h>

void imprimeInverso(char letra){
    printf("%c",letra);
}

int main(){
    char nome[]="FELICIDADE";
    for (int i = 9; i >= 0; i--){
        imprimeInverso(nome[i]);
    }
    
    return 0;
}