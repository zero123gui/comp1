#include <stdio.h>

void calculaSoma(int n){
    int x, y, soma=0;
    while(n>0){
        soma = 0;
        printf("Digite x e y\n");
        scanf("%d %d", &x, &y);
        while(y>0){
            if(x%2){
                soma+=x;
                y--;
            }
            x++;
        }
        n--;
    }
    printf("Total = %d\n", soma);

}

int main(){
    int n;
    scanf("%d", &n);
    calculaSoma(n);
    return 0;
}