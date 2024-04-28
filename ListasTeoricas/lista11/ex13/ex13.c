#include <stdio.h>

int contaPalavras(FILE *arq){
    int contador=0, flag=0;
    char caracter;

    while ((caracter = fgetc(arq))!= EOF){
        if (flag==1 && caracter == ' ')
        {
            contador++;
            flag=0;
        } else if (caracter != ' ')
        {
            flag=1;
        }
    }
    if (flag)
    {
        contador++;
    }
    
    return contador;
}

int main(){
    FILE *fa;
    int contador;

    fa = fopen("text.txt","a+");
    if (!fa){
        printf("Deu erro no arquivo");
        return 1;
    }
    
    contador = contaPalavras(fa);
    printf("Palavras: %d",contador);

    fclose(fa);

    return 0;
}