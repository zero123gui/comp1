#include <stdio.h>

int main(){
    FILE *fr;
    int vet[5];

    fr = fopen("teste.txt","r");

    if (fr == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1; // Encerra o programa com código de erro
    }

    for (int i = 0; i < 5; i++){
        fscanf(fr, "%d;", &vet[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",vet[i]);
    }
    
    fclose(fr);

    return 0;
}