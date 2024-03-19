#include <stdio.h>
#include <string.h>
#define max 15

int main(){
    char palavras[max][max];
    for (int i = 0; i < max; i++)
    {
        scanf("%[^\n]%*c", palavras[i]);
        printf("\n");
    }
    
    return 0;
}