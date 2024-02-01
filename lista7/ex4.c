#include <stdio.h>

int main(){
    int v[10], maior=0, pos=0, media=0;
    printf("Digite 10 numeros positivos\n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
        while(v[i]<0){
            scanf("%d", &v[i]);
        }
        if (v[i]>maior){
            maior = v[i];
            pos = i;
        }
        media += v[i];
    }
    printf("O maior elemento eh %d, na posicao %d e a media eh %d",maior, pos, media/10);

    return 0;
}