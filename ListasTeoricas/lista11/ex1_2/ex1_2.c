#include <stdio.h>

int main(){
    FILE *f;
    int x,y;
    char frase[15];
    printf("Digite uma frase");
    scanf("%[^\n]%*c %d %d", frase, &x, &y);
    f = fopen("teste.txt", "w");
    if (f==NULL){
        printf("Arquivo inexistente\n");
        return 1;
    }else 

    fprintf(f,"%s\n %d\n %d\n", frase, x,y);
    

    fclose(f);

    return 0;
}