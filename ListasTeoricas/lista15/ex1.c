#include <stdio.h>
#include <stdlib.h>

int main(){

    int **a, n, m, k;

    printf("Digite a quantidade de linhas e colunas: ");
    scanf("%d %d", &n, &m);

    printf("\nDigite o elemento inicial: ");
    scanf("%d", &k);

    a = (int**) malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++){
        *(a+i) = (int*) malloc(m*sizeof(int));
        if ( *(a+i)==NULL)
        {
            exit(1);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = k;
            printf("%d ",a[i][j]);
            k++;
        }
        printf("\n");
    }
    
    free(a);
    a==NULL;

    return 0;
}