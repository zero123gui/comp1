#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int n){
    int *v;

    v = (int*) malloc(n * sizeof(int));
    if (!v)
    {
        printf("nao foi possivel alocar");
        exit(1);
    }
    
    return v;
}

int* preencheVetor(int *v, int n){

    printf("Digite os %d valores do vetor", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    
    return v;
}

int* interseccao(int *v1, int *v2, int *v3, int n1, int n2, int *n3){
    int i,j,k=0;
    v1 = alocaVetor(n1);
    v2 = alocaVetor(n2);

    v1 = preencheVetor(v1,n1);
    v2 = preencheVetor(v2,n2);

    *n3=0;
    for ( i = 0; i < n1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            if (v1[i]==v2[j])
            {
                (*n3)++;
            }
        }
    }

    v3 = alocaVetor(*n3);
    for( i = 0; i < n1; i++){
        for ( j = 0; j < n2; j++)
        {
            if (v1[i]==v2[j])
            {
                v3[k]=v1[i];
                k++;
            }
        }
    }

    free(v1);
    v1 = NULL;

    free(v2);
    v2 = NULL;

    return v3;
}

int main(){

    int *v1, *v2, *v3, n1, n2, n3;

    printf("Digite o tamanho do primeiro e do segundo vetor: ");
    scanf("%d %d", &n1, &n2);
    
    v3 = interseccao(v1, v2, v3, n1, n2, &n3);

    printf("\nOs elementos da interseccao dos dois vetores sao:\n");
    for(int i = 0; i < n3; i++){
        printf("%d ", v3[i]);
    }

    free(v3);
    v3=NULL;

    return 0;
}