#include <stdio.h>

typedef struct Filme {
    int codigo;
    char nome[30];
    int salas;
} Filme;

Filme cadastroFilme(Filme filme) {
    printf("Digite o codigo do filme: ");
    scanf("%d%*c", &filme.codigo); 
    printf("Digite o nome do filme: ");
    scanf("%[^\n]%*c", filme.nome); 
    printf("Digite o numero da sala: ");
    scanf("%d%*c", &filme.salas); 
    return filme;
}

void imprimeFilme(Filme filme) {
    printf("Filme em cartaz: %s\n", filme.nome);
    printf("Codigo do filme: %d\n", filme.codigo);
    printf("Numero da sala: %d\n", filme.salas);
    printf("\n\n");
}

int main() {
    Filme filme[5];
    int i = 0;
    char op;

    do {
        printf("(C)adastrar filme\n");
        printf("(M)ostrar filmes cadastrados\n");
        printf("(S)air\n");
        scanf("%c%*c", &op); 

        if (op == 'c' || op == 'C') {
            filme[i] = cadastroFilme(filme[i]);
            i++;
        } else if (op == 'm' || op == 'M') {
            for (int j = 0; j < i; j++) {
                imprimeFilme(filme[j]);
            }
        }

    } while (op != 'S' && op != 's');

    return 0;
}
