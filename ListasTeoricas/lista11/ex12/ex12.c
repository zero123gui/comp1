#include <stdio.h>

int contaLetras(FILE *arq, char caracter){
    int contador=0;
    char c;
    
    while ((c = fgetc(arq))!= EOF)
    {
        if (c == caracter)
        {
            contador++;
        }
    }
    return contador;
}

int main(){
    FILE *fr;
    char user;
    int contador;

    fr = fopen("text.txt","r");
    if (!fr){
        printf("Arquivo deu pau!");
    }

    scanf("%c", &user);

    contador = contaLetras(fr, user);
    
    fclose(fr);

    printf("Quantidade de letras == %d",contador);

    
    return 0;
}