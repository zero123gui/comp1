#include <stdio.h>
#include <stdlib.h>

int main(){
    float *V, media=0;
    int n;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    V = (float*)malloc(n * sizeof(float));
    
    if (!V) return 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &*(V+i));
        media += *(V+i);
    }
    media = media/n;
    printf("%.2f",media);

    //printf("%f ", *(V+i));

    free(V);

    return 0;
}