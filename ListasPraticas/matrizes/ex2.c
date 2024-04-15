#include <stdio.h>

int main(){
    int mat[12][12];
    int i, j, cont = 300, coluna, soma=0;
    char op;
    printf("Digite a coluna\n");
    scanf("%d%*c", &coluna);
    printf("Digite (S) para soma ou (M) para media\n");
    scanf("%c", &op);
    for ( i = 0; i < 12; i++)
    {
        for ( j = 0; j < 12; j++)
        {
            mat[i][j] = cont;
            cont--;
            if (j==coluna)
            {
                soma += mat[i][j];
            }
        }
    }
    if (op == 's' || op == 'S')
    {
        printf("Soma = %d\n", soma);
    }else printf("Media = %d\n", soma/12);
    return 0;
}