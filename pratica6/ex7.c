#include <stdio.h>
#include <string.h>

int contaPalavra(char str[]){
    int flag_palavra = 0, i, cont = 0;
    for ( i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            if (flag_palavra)
            {
                cont++;
            }
            flag_palavra = 0;
        } else {
           flag_palavra = 1; 
        }
    }
    if (flag_palavra)
    {
        cont++;
    }
    
    return cont;
}

int main(){
    char str[] = " Esta   frase tem  palavras";
    int contador;
    contador = contaPalavra(str);
    printf("%d\n",contador);
    return 0;
}