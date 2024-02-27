#include <stdio.h>

int main() {
  int T, i;

  // Leia o valor de T
  printf("Digite um valor para T (2 <= T <= 50): ");
  scanf("%d", &T);

  // Valide o valor de T
  if (T < 2 || T > 50) {
    printf("Erro: T deve estar entre 2 e 50.\n");
    return 1;
  }

  // Inicialize o vetor com 1000 posições
  int N[1000];

  // Preencha o vetor com a sequência
  for (i = 0; i < 1000; i++) {
    N[i] = i % T;
  }

  // Imprima o vetor
  printf("Vetor N:\n");
  for (i = 0; i < 1000; i++) {
    printf("N[%d] = %d\n", i, N[i]);
  }

  return 0;
}
