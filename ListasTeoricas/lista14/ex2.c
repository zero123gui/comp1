#include <stdio.h>
#include <stdlib.h>

float calculaMedia(float *v, int n){
    float media=0;

    for (int i = 0; i < n; i++){
        media += *(v+i);
    }

    media = media/n;
    return media;
}

float lerNotas(){
    float *v, media;
    int n;
    
    printf("Digite quantas notas deseja digitar: ");
    scanf("%d", &n);

    v = (float*) malloc (n*sizeof(float)); 
    if(!v) return 1;

    for (int i = 0; i < n; i++){
        scanf("%f", &*(v+i));
    }
    
    media = calculaMedia(v,n);

    return media;
}

int main(){
    
    float media;

    media = lerNotas();
    printf("%.2f", media);

    return 0;
}