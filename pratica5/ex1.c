#include <stdio.h>

int main(){
    int A[4][4] = {{5,19,34,21},
                   {6,10,81,30},
                   {8,12,30,45},
                   {3,76,29,20}};
    int dp[4], i, j;

    for (i = 0; i < 4; i++)//prenche o vetor dp com a diagonal principal
    {
        for (j = 0; j < 4; j++)
        {
            if (i==j)
            {
                dp[i] = A[i][j];
            }
        }
    }

    for (i = 0; i < 4; i++)//multiplica a linha da matriz pela elemento da diagonal principal
    {
        for (j = 0; j < 4; j++)
        {
            A[i][j] = A[i][j] * dp[i];
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    
    

    return 0;
}