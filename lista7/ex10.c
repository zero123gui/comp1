#include <stdio.h>

void funcao1(int V1[10]){
    int x, V2[10], k=0;
    printf("Digite um numero\n");
    scanf("%d", &x);
    for (int i = 0; i < 10; i++){
        if (V1[i]!=x){
            V2[k] = V1[i];
            k++;
        }
    }
    for (int i = 0; i < k; i++){
        printf("%d\n",V2[i]);
    }
    
}

int main(){
    int V1[] = {70,2,34,10,81,5,43,11,7,20};
    funcao1(V1);
    return 0;
}