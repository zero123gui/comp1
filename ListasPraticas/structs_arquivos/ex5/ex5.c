#include <stdio.h>

typedef struct Aluno
{
    char nome[30];
    int disciplina[10];
    int qntd;
    float notas[5];
}Aluno;


int main(){
    Aluno aluno[5];
    int op=1, i=0;
    while (op){
        printf("\nDigite o nome do aluno: ");
        scanf("%s", &aluno[i].nome);
        printf("\nDigite a quantidade de disciplinas do aluno: ");
        scanf("%d", &aluno[i].qntd);
        for (int j = 0; j < aluno[i].qntd; j++){
            printf("\nDigite o cod da disciplina: ");
            scanf("%d", &aluno[i].disciplina);
        }
        
    }
    

    return 0;
}