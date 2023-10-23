#include <stdio.h>

void verificaDivisao(int x){
    if((x%2 == 0) && (x%3 == 0)){
        printf("Divisivel por 2 e 3\n");
    }else if(x%2 == 0){
        printf("Divisivel por 2\n");
    }else if(x%3 == 0){
        printf("Divisivel por 3\n");
    }
    
}

int main(){
    int valor;
    scanf("%d", &valor);
    verificaDivisao(valor);
    return 0;
}