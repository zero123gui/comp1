#include <stdio.h>

void funcao1(float temp[],float media){
    float v2[7];
    for (int i = 0,j = 0; i < 7; i++){
        if (temp[i]>=media){
            v2[j] = temp[i];
            printf("%.1f\n",v2[j]);
            j++;
        }
    }
    
}

int main(){
    float temp[7], media=0;
    for (int i = 0; i < 7; i++){
        scanf("%f", &temp[i]);
        media += temp[i];
    }
    media=media/7;
    printf("A media eh %.2f\n",media);
    funcao1(temp,media);
    return 0;
}