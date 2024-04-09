#include <stdio.h>

int main(){
    int l=3,c=4,x,y;
    char mat[l][c];
    do
    {
        printf("Digite qual posicao do tabuleiro deseja marcar\n");
        scanf("%d %d", &x, &y);    
    } while ((x<=0 || x>3) || (y<=0 || y>4));
    
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i==(x-1) && j==(y-1))
            {
                mat[i][j] = 'X';
            }else{
                mat[i][j]='-';
            }
        }
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%c ",mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}