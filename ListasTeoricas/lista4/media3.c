#include <stdio.h>

int funcao2(int x, int y, int z){
    int media;
    media = (x+y+z)/3;
    return media;
}

int funcao1(){
    int n1,n2,n3,final;
    printf("Digite as 3 notas do aluno\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    final = funcao2(n1,n2,n3);
    return final;
}

int main(){
    int mF;
    mF = funcao1();
    printf("a media final do aluno eh: %d",mF);
    return 0;
}