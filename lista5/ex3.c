#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    if (x==0){
        printf("eh zero");
    }else if (x%2==0){
        printf("eh par");
    }else{
        printf("eh impar");
    }
    
    
    

    return 0;
}