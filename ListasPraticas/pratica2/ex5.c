#include <stdio.h>

void verificaData(int dia, int mes, int ano){
    if(ano>=0 && ano<=2023){
        if(mes>=1 && mes<=12){
            if (mes == 2){
                (dia>=1 && dia<=28)? printf("Data valida\n"):printf("Dia invalido\n");
            }else if(dia>=1 && dia<=30){
                printf("Data valida\n");
            }else printf("Dia invalido\n");     
        }else printf("Mes invalido\n");
    }else printf("Ano invalido\n");
    
}

void escaneiaValores(){
    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);
    verificaData(dia, mes, ano);
}

int main(){
    escaneiaValores();

    return 0;
}