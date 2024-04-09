#include <stdio.h>

int main(){
    int l, c, aux=10, i, j;
    printf("Digite a qnt de linhas e colunas\n");
    scanf("%d %d", &l, &c);
    int mat[l][c];
    for ( i = 0; i < l; i++)
    {
        for ( j = 0; j < c; j++)
        {
            mat[i][j]=aux++;
        }
    }
    for ( j = 0; j < c; j++)
    {
        for ( i = 0; i < l; i++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}