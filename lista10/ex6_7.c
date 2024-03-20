#include <stdio.h>

typedef struct Aluno{
    char nome[20];
    char disciplinas[10][20];
    float notas[10][5];
    int qntd_disciplinas;
    float media[10];
}Aluno;

void imprimeCadastro(Aluno aluno){
    printf("Nome do Aluno: %s\n", aluno.nome);
    for (int i = 0; i < aluno.qntd_disciplinas; i++)
    {
        printf("Disciplina %d: %s\n", i+1, aluno.disciplinas[i]);
    }
    printf("\n\n");
}

int main(){
    Aluno aluno[5];
    int i=0, j, z;
    int op=0, qntd;
    do{
        printf("\nQual o nome do aluno que deseja cadastrar: ");//nome do aluno
        scanf("%[^\n]%*c", aluno[i].nome);

        printf("\nQuantas disciplinas o aluno faz: ");//quantidade de disciplinas
        scanf("%d%*c", &aluno[i].qntd_disciplinas);

        for (j = z = 0; j < aluno[i].qntd_disciplinas; j++, z++)
        {
            printf("\nDigite o nome da disciplina %d: ",j+1);//nome da disciplina
            scanf("%[^\n]%*c", aluno[i].disciplinas[j]);

            printf("\nQuantas notas deseja registrar: ");//quantidade de notas
            scanf("%d%*c", &qntd);

            for (int k = 0; k < qntd; k++)
            {
                printf("\nDigite a nota %d: ", k+1);//notas por disciplina
                scanf("%f%*c", &aluno[i].notas[j][k]);
                aluno[i].media[j] += aluno[i].notas[j][k];
            }
            aluno[i].media[j] = aluno[i].media[j]/qntd;
        }

        printf("\nDigite 1 - para cadastrar novo alunos\nDigite 0 - para parar ");
        scanf("%d%*c", &op);
        i++;
        
    }while(op);


    for (int num = 0; num < i; num++)
    {
        imprimeCadastro(aluno[num]);
    }
    

    return 0;
}