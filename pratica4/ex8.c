#include <stdio.h>

int main(){
    float N[100],x;
    printf("Digite um numero X");
    scanf("%f",&x);
    for (int i = 0; i < 100; i++)
    {
        N[i] = x;
        x = x/2;
        printf("N[%d] = %.4f\n", i, N[i]);
    }
    return 0;
}