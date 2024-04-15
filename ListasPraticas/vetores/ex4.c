#include <stdio.h>

int main(){
    int n;
    do{
        printf("Digite um numero menor que 46\n");
        scanf("%d", &n);
    } while (n>46);
    int v[n];   
    v[0] = 0;
    v[1] = 1;
    for (int i = 0, j = 1; i < n; i++, j++){
        v[j+1] = v[i]+v[j];
        printf("%d\n",v[i]);
    }
    
    return 0;
}