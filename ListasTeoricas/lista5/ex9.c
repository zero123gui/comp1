#include <stdio.h>

void verifica(int id, int temp){
    if(id >= 65 || temp >= 30){
        printf("Requerer aposentadoria\n");
    }
    else if(id >= 60 && temp >= 25){
        printf("Requerer aposentadoria\n");
    }
    else printf("Naum requerer\n");
}

int main(){
    int codigo, idade, tempo;
    scanf("%d %d %d", &codigo, &idade, &tempo);
    
    verifica(idade, tempo);
    
    return 0;
}