#include <stdio.h>

int main(){
    int v[3]={1,2,3},*p;
    p=v+2;
    printf("%d",*p);

    return 0;
}