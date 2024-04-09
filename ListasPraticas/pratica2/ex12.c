#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    if(x==0 && y==0){
        printf("O ponto esta na origem\n");
    }else if(x==0){
        printf("O ponto esta no Eixo X\n");
    }else if(y==0){
        printf("O ponto esta no Eixo Y\n");
    }else if(x>0 && y>0){
        printf("O ponto esta em Q1\n");
    }else if(x<0 && y>0){
        printf("O ponto esta em Q2\n");
    }else if(x<0 && y<0){
        printf("O ponto esta em Q3\n");
    }else printf("O ponto esta em Q4\n");   
    return 0;
}