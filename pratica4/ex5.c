#include <stdio.h>

int main(){
    int x, aux, vet[10] = {5, 10, 18, 24, 39, 43, 55, 69, 78};
    printf("Digite um numero para ser inserido no vetor\n");
    scanf("%d", &x);
    for (int i = 0; i < 10; i++){
        if (x<=vet[i] || i==9){
            aux = vet[i];
            vet[i] = x;
            x = aux;
        }
        printf("%d\n",vet[i]);
    }
    return 0;
}