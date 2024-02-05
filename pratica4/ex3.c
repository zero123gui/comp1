#include <stdio.h>

int main(){
    int n[10]={0,1,2,3,4,5,6,7,8,9}, aux;
    for (int i = 0, j = 9; i < 5; i++, j--){
        aux = n[i];
        n[i]=n[j];
        n[j]=aux;
    }
    for (int i = 0; i < 10; i++){
        printf("%d\n",n[i]);
    }
    
    

    return 0;
}