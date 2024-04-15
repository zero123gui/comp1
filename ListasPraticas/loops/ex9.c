#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    while (x!=0 && y!=0){
        if(x>0 && y>0){
            printf("Primeiro\n");
        }else if(y>0){
            printf("Segundo\n");
        }else if(x<0 && y<0){
            printf("Terceiro\n");
        }else printf("Quarto");
        scanf("%d %d", &x, &y);
    }
    
    return 0;
}