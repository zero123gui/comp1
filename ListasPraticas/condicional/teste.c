#include <stdio.h>

int main(){
    float x;
    scanf("%f", &x);
    x = x*100;
    int y = x/10000;
    printf("%d\n", y);
    return 0;
}