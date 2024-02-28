#include <stdio.h>
#define MAX 15

int main(){
    int l=2, c=3, mat1[l][c], mat2[l][c], soma[l][c];
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            soma[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
    return 0;
}