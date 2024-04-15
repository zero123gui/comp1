#include <stdio.h>

void intersecssao(int v1[], int v2[]){
    int v3[5],encontrei=0;
    for (int i = 0; i < 5; i++){//percorre o vetor 1
        for (int j = 0; j < 5; j++){//percorre o vetor 2
            if (v1[i]==v2[j]){//verifica se tem valores em comum
                encontrei=1;
            }
        }
        if (encontrei == 1){//se tem valor em comum joga no vetor 3
            v3[i]=v1[i];
        } else{//senao ele define a posicao como 0
            v3[i]=0;
        }
        printf("v3[%d] = %d\n",i,v3[i]);
        encontrei = 0;
    }
}

int main(){
    int v1[5]={5,2,2,3,5};
    int v2[5]={5,6,2,8,9};
    intersecssao(v1,v2);
    return 0;
}