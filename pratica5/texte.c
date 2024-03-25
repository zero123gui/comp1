#include <stdio.h>

void imprimirMatrizCebola(int N) {
    int matriz[N][N];
    int camada, valor, i, j;

    // Preenchendo a matriz cebola
    camada = (N + 1) / 2;
    valor = 1;
    for (i = 0; i < camada; i++) {
        for (j = i; j < N - i; j++) {
            matriz[i][j] = valor;//linha de cima
            matriz[N - i - 1][j] = valor;// linha de baixo
            matriz[j][i] = valor;//linha da esquerda
            matriz[j][N - i - 1] = 7;
        }
        valor++;
    }

    // Imprimindo a matriz
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N;

    printf("Digite o tamanho da matriz cebola: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, insira um número positivo para o tamanho da matriz cebola.\n");
        return 1;
    }

    imprimirMatrizCebola(N);

    return 0;
}
