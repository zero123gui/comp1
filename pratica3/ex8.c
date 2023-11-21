#include <stdio.h>

void funcao1(){
    int i, j;
    for (i = 1; i <= 9; i++){
        for (j=i+6; j >= i+4; j--){
            if (i%2){
                printf("i=%d j=%d\n",i,j);
                j--;
                printf("i=%d j=%d\n",i,j);
                j--;
                printf("i=%d j=%d\n",i,j);
            }
        }
               
    }   
}

int main(){
    funcao1();
    return 0;
}