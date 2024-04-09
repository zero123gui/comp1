#include <stdio.h>

void imprimeMatriz(int mat[][12]){
    int i,j,x,y;

    for ( i = 0, x = 0, y = 11; i < 5; i++, x++, y--)//verde
    {
        for ( j = 0; j < 12; j++)
        {
            if (j>x && j<y)
            {
                printf("%d ", mat[i][j]);
            }else printf(" ");
        }
        printf("\n");
    }
    printf("Verde\n");

    for ( i = 0; i < 12; i++)//laranja
    {
        for ( j = 0, x = 0, y = 11; j < 12; j++, x++, y--)
        {
            if (i>x && i<y)// 
            {
                printf("%d ", mat[i][j]);
            }else printf(" ");
        }
        printf("\n");
    }
    printf("laranja\n");

    for (i = 0; i < 12; i++) {//rosa
        for (j = 0, x = 11, y = 0; j < 12; j++, x--,y++) {
            if (i > x && i < y) {
                printf("%d ", mat[i][j]);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("Rosa\n");

    for ( i = 7, x = 4, y = 7; i < 12; i++,x--,y++)//azul
    {
        for ( j = 0; j < 12; j++)
        {
            if (j>x && j<y)
            {
                printf("%d ", mat[i][j]);
            }else printf("   ");
        }
        printf("\n");
    }
    printf("azul\n");

}

int main(){
    int mat[12][12];
    int i, j;

    for ( i = 0; i < 12; i++)
    {
        for ( j = 0; j < 12; j++)
        {
            mat[i][j] = i;
        }
    }
    imprimeMatriz(mat);

    return 0;
}