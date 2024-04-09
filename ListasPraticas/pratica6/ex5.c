#include <stdio.h>
#include <string.h>

int main(){
    char palavra[30];
    char letra;
    int i, tamanho;
    printf("Digite uma palavra\n");
    fgets(palavra,30,stdin);
    strtok(palavra,"\n");
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    tamanho = strlen(palavra);
    for (i = 0; i < tamanho; i++)
    {
        if (letra != palavra[i])
        {
            printf("%c",palavra[i]);
        }
        
    }
    

    return 0;
}