#include <stdio.h>

typedef struct Aluno{
    char nome[20];
    char disciplinas[10][20];
    float notas[10];
    int quantidade;
}Aluno;

void imprimeCadastro(Aluno aluno){
    printf("Nome do Aluno: %s\n", aluno.nome);
    for (int i = 0; i < aluno.quantidade; i++)
    {
        printf("Disciplina %d: %s, media final: %.2f\n", i+1, aluno.disciplinas[i], aluno.notas[i]);
    }
    printf("\n\n");
}

int main(){
    Aluno aluno[5];
    int i=0, j, k;
    int op=0;
    do{
        printf("\nQual o nome do aluno que deseja cadastrar: ");
        scanf("%[^\n]%*c", aluno[i].nome);

        printf("\nQuantas materias o aluno faz: ");
        scanf("%d%*c", &aluno[i].quantidade);
        for (j = 0; j < aluno[i].quantidade; j++)
        {
            printf("\nDigite o nome da disciplina %d: ",j+1);
            scanf("%[^\n]%*c", aluno[i].disciplinas[j]);

            printf("\nDigite a media final do aluno: ");
            scanf("%f%*c", &aluno[i].notas[j]);
        }

        printf("\nDigite 1 - para cadastrar novo alunos\nDigite 0 - para parar ");
        scanf("%d%*c", &op);
        i++;
        
    }while(op);

    for (k = 0; k < i; k++)
    {
        imprimeCadastro(aluno[k]);
    }
    

    return 0;
}