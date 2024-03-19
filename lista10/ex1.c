#include <stdio.h>

struct Cadastro{//tipo struct
    char nome[15];
    char sexo;
    int matricula;
    float notas[4];
}; //alunos[5] - nome da váriavel, alunos do tipo struct
            //cada aluno tem seus dados

void imprimeCadastro(int qnt, struct Cadastro alunos[]){
    int i, j;
    for (i = 0; i < qnt; i++)
    {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Sexo: %c\n",alunos[i].sexo);
        printf("Matricula: %d\n", alunos[i].matricula);
        for (j = 0; j < 4; j++)
        {
            printf("Nota %d: %.2f\n", j, alunos[i].notas[j]);
        }   
    }
}


int main(){
    struct Cadastro alunos[5];//variável de alunos que é um vetor de structs
    int qnt, i, j;
    printf("Digite quantos alunos deseja cadastrar\n");
    scanf("%d", &qnt);
    for (i = 0; i < qnt; i++)
    {
        printf("Digite o nome do aluno: ");
        scanf("%*c%[^\n]%*c",alunos[i].nome);//%[^\n]%*c
        printf("\nDigite o sexo do aluno: ");
        scanf("%c%*c", &alunos[i].sexo);
        printf("\nDigite a matricula do aluno: ");
        scanf("%d", &alunos[i].matricula);
        for (j = 0; j < 4; j++)
        {
            printf("Digite a nota %d: ",j+1);
            scanf("%f", &alunos[i].notas[j]);
            printf("\n");
        }
    }
    imprimeCadastro(qnt, alunos);
    return 0;
}