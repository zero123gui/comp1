#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int encheBalde(){
    int balde;
    balde = rand()%3+1;
    return balde;
}

void enchePoco(){
    int op, balde, quantidade=0;
    printf("Para sortear um balde digite 1\n");
    scanf("%d", &op);
    //1 - continuar e 2 - parar
    while (op!=2){
        balde = encheBalde();
        switch(balde){
        case 1://normal 5L
            quantidade+=5;
            break;
        case 2://mega balde 10L
            quantidade+=10;
            break;
        case 3://balde furado 0L
            quantidade+=0;
            break;
        default:
            break;
        }
        printf("Para continuar digite 1\nPara parar digite 2\n");
        scanf("%d", &op);
    }
    printf("%d\n",quantidade);
    if (quantidade > 39 && quantidade < 51){
        printf("Sucesso\n");
    }else printf("Fracasso\n");
}

int main(){
    srand(time(NULL));
    printf("START\n");
    enchePoco();
    return 0;
}