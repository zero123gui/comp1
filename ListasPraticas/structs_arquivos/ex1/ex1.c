#include <stdio.h>

int main(){
    FILE *fr;
    int cpf[11];

    fr = fopen("entrada.txt","r");
    if (fr==NULL){
        printf("Entrada invalida de arquivo");
        return 1;
    }

    for (int i = 0; i < 11; i++){
        fscanf(fr, "%1d", &cpf[i]); 
        if (i == 2 || i == 5){
            fscanf(fr, ".");
        } else if (i == 8)
        {
            fscanf(fr, "-");
        }
    }

    for (int i = 0; i < 11; i++)
    {
        printf("%d", cpf[i]);
        if (i == 2 || i == 5 || i == 8)
        {
            printf("\n");
        }
        
    }    
    
    fclose(fr);

    return 0;
}