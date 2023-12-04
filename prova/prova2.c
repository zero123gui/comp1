#include <stdio.h>

void aposentadoria(int idade, int servico){
    if (idade > 64){
        printf("Pode aposentar\n");
    }else if (servico > 29){
        printf("Pode aposentar\n");
    }else if (idade > 59 && servico >24){
        printf("Pode aposentar\n");
    }else printf("Nao pode aposentar\n");
}

void bissexto(int anoinicio, int anofinal){
    while (anoinicio<anofinal){
        if ((anoinicio%4==0 && anoinicio%100!=0) || anoinicio%400==0){
            printf("O ano %d eh bissexto\n", anoinicio);
        }else printf("O ano %d naum eh bissexto\n", anoinicio);
        anoinicio++;
    }
}

int main(){
    int idade, servico, anoinicio, anofinal, op;
    do
    {
        printf("Escolha uma opcao ou 0 para sair:\n");
        printf("1 - Descubra se vc ja pode se aposentar\n");
        printf("2 - Verificar se os anos dentro de um intervalo sao bissextos\n");
        printf("0 - Sair\n");
        scanf("%d", &op);
        switch(op){
            case 1://aposentadoria
                printf("Digite sua idade e tempo de servico\n");
                scanf("%d %d", &idade, &servico);
                aposentadoria(idade, servico);
                break;
            case 2://intervalo
                printf("Digite o ano de inicio e o ano final\n");
                scanf("%d %d", &anoinicio, &anofinal);
                bissexto(anoinicio,anofinal);
                break;
        }
    } while (op!=0);
    
}