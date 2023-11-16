#include <stdio.h>

void teste1(int x, int y){
    int i=1,j=60;
    while(j>=0){
        printf("i=%d j=%d\n",i,j);
        i+=x;
        j-=y;
    }
    
}

int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    teste1(x,y);
    return 0;
}