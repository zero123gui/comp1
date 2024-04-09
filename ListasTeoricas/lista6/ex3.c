#include <stdio.h>
#include <math.h>

void calculaRaiz(){
    int num, raiz;
    scanf("%d", &num);
    raiz = sqrt(num);
    printf("A raiz de %d eh %d\n", num, raiz);
}

int main(){
    int op;
    do{
        printf("Digite uma opcao:\n");
        printf("1 - Calcular raiz quadrada de um numero\n");
        printf("2 - Sair\n");
        scanf("%d",&op);
        if(op==1){
            calculaRaiz();
        }
    } while (op != 2);
    
    return 0;
}