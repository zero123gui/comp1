#include <stdio.h>

void verificaSituacao(int atual, int nascimento){
    int idade;
    idade = atual - nascimento;
    if(idade < 16){
        printf("Sem carteira e nao eleitor\n");
    }else if(idade >= 16 && idade < 18){
        printf("Sem carteira e eleitor facultativo");
    }else if(idade >= 70){
        printf("Com carteira e eleitor facultativo");
    }else if(idade >= 18 && idade <= 69){
        printf("Com carteira e eleitor obrigatorio");
    }
}

int main(){
    int anoAtual, anoNascimento;
    scanf("%d %d", &anoAtual, &anoNascimento);
    verificaSituacao(anoAtual, anoNascimento);
    return 0;
}