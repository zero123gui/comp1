#include <stdio.h>
#include <string.h>

int main(){
    char nome1[]="Guilherme";
    char nome2[]="Kenzo";
    char nome3[]="Takano";

    if (strlen(nome1) > strlen(nome2) && strlen(nome1) > strlen(nome3))
    {
        if (strlen(nome2) < strlen(nome3))
        {
            printf("Maior = %s de tamanho %d\nMenor = %s de tamanho %d\n", nome1, strlen(nome1), nome2, strlen(nome2));
        }else printf("Maior = %s de tamanho %d\nMenor = %s de tamanho %d\n", nome1, strlen(nome1), nome3, strlen(nome3));
        
    }else if (strlen(nome2) > strlen(nome1) && strlen(nome2) > strlen(nome3))
    {
        if (strlen(nome1) < strlen(nome3))
        {
            printf("Maior = %s de tamanho %d\nMenor = %s de tamanho %d\n", nome2, strlen(nome2), nome1, strlen(nome1));
        }else printf("Maior = %s de tamanho %d\nMenor = %s de tamanho %d\n", nome2, strlen(nome2), nome3, strlen(nome3));
    }else
    {
        if (strlen(nome1) < strlen(nome2))
        {
            printf("Maior = %s de tamanho %d\nMenor = %s de tamanho %d\n", nome3, strlen(nome3), nome1, strlen(nome1));
        }else printf("Maior = %s de tamanho %d\nMenor = %s de tamanho %d\n", nome3, strlen(nome3), nome2, strlen(nome2));
    }
    
    
    
    return 0;
}