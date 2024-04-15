#include <stdio.h>

int main(){
    int x[10]={2,4,3,5,6,0,-5,-4,-3,-1};
    for (int i = 0; i < 10; i++){
        if (x[i]<=0){
            x[i]=1;
        }
        printf("%d\n",x[i]);
    }
    return 0;
}