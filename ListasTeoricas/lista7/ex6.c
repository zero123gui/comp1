#include <stdio.h>
#include <math.h>

int funcao1(int v1[], int v2[]){
    int soma=0;
    for (int i = 0; i<5; i++){
        soma += v1[i]*v2[i];
    }
    return soma;
}

void funcao2(int v1[], int v2[]){
    int v3[5];
    for (int i = 0; i<5; i++){
        v3[i] = v1[i]+v2[i];
        printf("A raiz de %d eh %f\n",v3[i],sqrt(v3[i]));
    }
    
}

int main(){
    int v1[5], v2[5], soma;
    for (int i = 0; i < 5; i++){
        scanf("%d %d", &v1[i], &v2[i]);
    }
    soma = funcao1(v1,v2);
    printf("O produto escalar entre os vetores eh %d\n",soma);
    funcao2(v1,v2);
    return 0;
}