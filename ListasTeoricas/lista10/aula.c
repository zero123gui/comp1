#include <stdio.h>

struct Evento
{
    char nome[15];
    float preco;
};


int main(){
    struct Evento evento;
    scanf("%s", evento.nome);
    printf("%s",evento.nome);
    return 0;
}