#include <stdio.h>
#include <stdlib.h>

void interseccao(int *v1, int *v2, int *v3, int n1, int n2, int *n3){
    int count=0;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            
        }
        
    }
    
}

int main(){

    int *v1, *v2, *v3, n1, n2, *n3;

    printf("Digite o tamanho do primeiro e do segundo vetor: ");
    scanf("%d %d", &n1, &n2);

    v1 = (int*) malloc (n1 * sizeof(int));
    v2 = (int*) malloc (n2 * sizeof(int));
    if (!v1 || !v2){
        printf("Falta de memoria");
        return 1;
    }
    
    interseccao(v1, v2, v3, n1, n2, n3);

    free(v1);
    free(v2);

    return 0;
}