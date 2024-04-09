#include <stdio.h>

void calculaMedia(int notas[]){
    int media=0, count=0;
    for (int i = 0; i < 10; i++){
        media += notas[i];
    }
    media = media/10;
    for (int i = 0; i < 10; i++){
        if(notas[i]>media){
            count +=1;
        }
    }
    printf("A media eh %d e a quantidade de alunos acima da media eh %d",media,count);
}

int main(){
    int notas[10];
    for (int i = 0; i < 10; i++){
        scanf("%d", &notas[i]);
    }
    calculaMedia(notas);
    return 0;
}