#include <stdio.h>

void calculaDivisores(int n){
    int i=1;
    while(n%i==0){
        printf("%d ",i);
        i++;
    }
    
}

int main(){
    int n;
    scanf("%d", &n);
    calculaDivisores(n);
    return 0;
}