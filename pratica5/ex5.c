#include <stdio.h>

int main(){
    int num, camadas, valor = 1;

    do
    {
        printf("Digite o tamanho da matriz de 1-100\n");
        scanf("%d", &num);
    } while (num<1 || num>100);
    
    camadas = (num+1)/2;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i==0 || j==0 || i==num-1 || j==num-1)
            {
                printf("1 ");
            }else printf("2 ");
            
        }
        printf("\n");
    }
    

    return 0;
}