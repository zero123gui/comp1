#include <stdio.h>

int main(){
    int x[10],num;
    scanf("%d", &num);
    x[0] = num;
    printf("%d\n",x[0]);
    for (int i = 1; i < 10; i++){
       x[i] = x[i-1]*2; 
        printf("%d\n",x[i]);
    } 
    return 0;
}