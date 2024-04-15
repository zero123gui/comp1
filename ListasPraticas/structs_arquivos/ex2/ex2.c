#include <stdio.h>

int main(){
    FILE *fr, *fw;
    char frases[2][30];

    fr = fopen("arquivo.txt", "r");
    if (fr == NULL){
        printf("Erro de leitura do arquivo\n");
        return 1;
    }

    for (int i = 0; i < 2; i++){
        fscanf(fr, "%[^\n]%*c", &frases[i]);
    }
    
    fclose(fr);

    fw = fopen("saida.txt", "w");
    if (fw == NULL){
        printf("Erro de leitura do arquivo\n");
        return 1;
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; frases[i][j] != '\0'; j++){
            fprintf(fw, "%c", frases[i][j]);
            if (frases[i][j]== ',')
            {
                fprintf(fw, "\n");
            }
        }
        fprintf(fw, "\n");      
    }
    
    fclose(fw);
    
    return 0;
}