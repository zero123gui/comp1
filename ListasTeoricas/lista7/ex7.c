#include <stdio.h>

void funcao1(int v1[],int v2[]){
    int v3[10];
    for (int i = 0, j = 0; i < 5; i++, j++){
        v3[j] = v1[i];
        j++;
        v3[j] = v2[i];
    }
    for (int i = 0; i < 10; i++){
        printf("v3[%d] eh %d\n",i, v3[i]);
    }
    
}

int main(){
    int v1[5], v2[5];
    for (int i = 0; i < 5; i++){
        scanf("%d %d", &v1[i], &v2[i]);
    }
    funcao1(v1,v2);
    return 0;
}