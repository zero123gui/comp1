#include <stdio.h>
#include <string.h>

void verificaPalindromo(char z[], int tam){
    int i,j,flag=1;
    for ( i = 0, j = tam-1; i < j; i++, j--)
    {
        if (z[i]!=z[j])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("Eh palindromo\n");
    }else
    {
        printf("Nao eh palindromo");
    }
}

int main(){
    char z[10];
    int tam;
    scanf("%s", z);
    tam = strlen(z);
    verificaPalindromo(z,tam);
    return 0;
}