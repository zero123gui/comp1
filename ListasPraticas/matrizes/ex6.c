#include <stdio.h>

void criaMatriz(int N){
    int mat[N][N], i, j, x,y;

    for ( i = 0, x = 1; i < N; i++,x*=2 )//preenche matriz
    {
        for ( j = 0, y = x; j < N; j++,y*=2)
        {
            mat[i][j] = y;
        }
    }

    for ( i = 0; i < N; i++)//funcao de print
    {
        for ( j = 0; j < N; j++)
        {
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int N;
    printf("Digite o tamanho da matriz N: ");
    scanf("%d", &N);
    criaMatriz(N);

    return 0;
}