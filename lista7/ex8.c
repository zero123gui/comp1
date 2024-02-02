#include <stdio.h>

int funcao1(int alunos){
    int v1[alunos];
    float contagem=0;
    printf("Digite a idade dos %d alunos\n",alunos);
    for (int i = 0; i < alunos; i++){
        scanf("%d", &v1[i]);
        if (v1[i]>=18){
            contagem+=1;
        }
    }
    return (contagem/alunos)*100;
}

int main(){
    int alunos;
    float porcentagem;
    printf("Digite quantos alunos tem na turma\n");
    scanf("%d", &alunos);
    porcentagem = funcao1(alunos);
    printf("A porcentagem eh %.f%%\n",porcentagem);
    return 0;
}