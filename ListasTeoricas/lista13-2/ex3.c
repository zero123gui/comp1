#include <stdio.h>

int main(){
    int v[]={11,12,13,14,15}, *p;
    p = v;

    printf("%d\n", p);
    printf("%d\n", &v[1]);
    printf("%d\n", &p[0]);
    printf("%d\n", p[2]);
    printf("%d\n", p+2);
    printf("%d\n", *(p+2));
    printf("%d\n", --p);
    printf("%d\n", ++p);
    
    return 0;
}