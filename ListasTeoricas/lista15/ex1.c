#include <stdio.h>
#include <stdlib.h>

int main(){

    int **a, n, m, k;

    printf("Digite a quantidade de linhas e colunas: ");
    scanf("%d %d", &n, &m);

    printf("\nDigite o elemento inicial: ");
    scanf("%d", &k);

    a = (int**) malloc(n * sizeof(int*));
    if(a == NULL){
        printf("Memoria insuficiente\n");
        exit(1);
    }

    for (int i = 0; i < n; i++){
        a[i] = (int*) malloc(m * sizeof(int));
        if ( a[i]==NULL)
        {
            printf("Memoria insuficiente\n");
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
    
    //Liberando espaço de cada vetor-linha:
    for(int i=0; i<=n-1; i++){
        free(a[i]);
        a[i] = NULL;
    }

    return 0;
}