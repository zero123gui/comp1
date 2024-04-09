#include <stdio.h>

int main(){
    float v[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%f", &v[i]);
    }
    for (int i = 7; i >= 0; i--)
    {
        printf("%.2f ",v[i]);
    }
    return 0;
}