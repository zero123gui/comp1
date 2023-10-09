#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio(){
    srand(time(NULL));

    int valor;
    valor = rand() %46 + 5;
    printf("%d", valor);    
}

int main(){
    aleatorio();
    return 0;
}