#include <stdio.h>

void imprimeMatriz(int A[][4]){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i>j)
            {
                printf("%d ",A[i][j]);
            }
        }
    }
}

int main(){
    int mat[4][4], num;
    printf("Digite o numero inicial\n");
    scanf("%d", &num);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mat[i][j]=num++;
        }
    }
    imprimeMatriz(mat);
    
    return 0;
}