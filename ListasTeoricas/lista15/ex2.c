#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** alocaMatriz(int n, int tam){
    char **v;

    v = (char**) malloc(n * sizeof(char*));
    if (v==NULL)
    {
        printf("Espaco insuficiente");
        exit(1);
    }
    
    for (int i = 0; i < n; i++)
    {
        v[i] = (char*) malloc((tam+1) * sizeof(char));
        if (v[i]==NULL)
        {
            printf("Espaco insuficiente");
            exit(1);
        }
    }

    return v;
}

void preencheNomes(char **A, int n){
        
    printf("Digite os nomes: \n");

    for (int i = 0; i < n; i++)
    {
        scanf(" %[^\n]%*c", A[i]);
    }
}

void achaMaior(char **A, char n, int *maior){
    int tam;

    *maior = strlen(A[0]);
    for (int i = 0; i < n; i++)
    {
        tam = strlen(A[i]);
        if ( tam > *maior)
        {
            *maior = strlen(A[i]);
        }
    }
}

void copiaMatriz(char **A, char **B, int n){

    for (int i = 0; i < n; i++)
    {
        strcpy( B[i], A[i]);
    }
}

void liberaMemoria(char **M, int n){
    int i;
    for(i=0; i<n; i++){
        free( *(M+i) );
        *(M+i) = NULL; //apenas por segurança
    }
    free(M);
    //M = NULL; //apenas por segurança
}

int main(){

    char **A, **B;
    int n, tam=10, maior;

    printf("Digite a quantidade de nomes que deseja inserir: ");
    scanf("%d", &n);

    A = alocaMatriz(n, tam);

    preencheNomes(A,n);

    achaMaior(A,n,&maior);

    B = alocaMatriz(maior, maior);

    copiaMatriz(A,B,n);

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", B[i]);
    }
    
    liberaMemoria(A,n);

    return 0;
}