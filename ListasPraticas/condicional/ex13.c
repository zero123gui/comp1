#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    if(x%y == 0 || y%x==0){
        printf("Sao multiplos\n");
    }else printf("Nao sao multiplos\n");
    return 0;
}