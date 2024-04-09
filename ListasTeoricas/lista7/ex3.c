#include <stdio.h>

int main(){
    int a[10], d[10];
    for (int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
        d[i] = a[i]*2;
    }
    for (int i = 0; i < 10; i++){
        printf("%d ",d[i]);
    }

    return 0;
}