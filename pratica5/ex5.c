#include <stdio.h>

int main(){
    int num, camadas, valor;

    do
    {
        printf("Digite o tamanho da matriz de 1-100\n");
        scanf("%d", &num);
    } while (num<1 || num>100);
    int mat[num][num];
    valor = 1;
    camadas = (num+1)/2;

    for (int i = 0; i < camadas; i++)
    {
        for (int j = i; j < num-1; j++)
        {
            mat[i][j] = valor;
            mat[num-i-1][j] = valor;
            mat[j][i] = valor;
            mat[j][num-i-1] = valor;
        }
        valor++;
    }
    
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}