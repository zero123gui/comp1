#include <stdio.h>
int main(){
    char frase[5];
    FILE *fr;

    fr = fopen("pprt.txt","r");

    if (fr==NULL){
        printf("Arquivo inexistente\n");
        return 1;
    }else 

    for (int i = 0; fscanf(fr, "%c%*c", &frase[i]) != EOF; i++){
        printf("%c", frase[i]);
    }

    fclose(fr);

    return 0;
}