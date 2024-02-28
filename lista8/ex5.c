#include <stdio.h>

void inverteMatriz(int mat1[][3]){
    int B[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            B[j][i] = mat1[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    
    
}

int main(){
    int A[3][3] = {{10,11,12},
                   {13,14,15},
                   {16,17,18}};
    inverteMatriz(A);
    return 0;
}