#include <stdio.h>

int main(){
    FILE *fr,*fw;
    char caracter[5];
    int i;

    fr = fopen("texto.txt","r");
    if (!fr){
        printf("deu pau");
        return 1;
    }
    
    for (i = 0; fscanf(fr, "%c;", &caracter[i])!=EOF; i++){
    }
    fclose(fr);

    fw = fopen("teste.txt","w");
    if(!fw){
        printf("Tbm deu pau");
        return 1;
    }
    for ( int j = 0; j < i; j++)
    {
        fprintf(fr,"%c ",caracter[j]);
    }

    fclose(fw);
    

    return 0;
}