#include <stdio.h>

void leCPF(){
    FILE *fr;
    int cpf[11];

    fr = fopen("entrada.txt", "r");
    if(!fr){
        printf("Erro no arquivo");
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
    
}

int main(){
    leCPF();

    return 0;
}