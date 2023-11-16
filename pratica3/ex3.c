#include <stdio.h>

void descobreImpar(int x){
    int i=0;
    while(i<6){
        if(x%2==1){
            printf("%d\n",x);
            i++;
        }
        x++;
    }
}

int main(){
    int x;
    scanf("%d", &x);
    descobreImpar(x);
    return 0;
}