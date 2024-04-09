#include <stdio.h>
#include <math.h>
#include <stdlib.h> // contem a função absolute

int calculaDistancia(int x, int y){
    int dist;
    dist = abs(x-y);
    return dist;
}

int main(){
    int x,y,distancia;
    printf("entre com as duas coordenadas\n");
    scanf("%d %d", &x, &y);
    distancia = calculaDistancia(x,y);
    printf("A distancia entre X e Y eh: %d\n",distancia);
    return 0;
}