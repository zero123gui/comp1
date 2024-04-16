#include <stdio.h>

int main(){
    FILE *fr;
    int espacos=0;
    char caracter;

    fr = fopen("texto.txt","r");
    if (fr == NULL){
        printf("Arquivo inválido\n");
        return 1;
    }
    while (fscanf(fr, "%c", &caracter)!=EOF){
        if (caracter == '\n'){
            espacos++;
        }    
    }
    printf("%d", espacos);
    
    return 0;
}